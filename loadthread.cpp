#include "datareceiver.h"
#include "imagesloadthread.h"
#include "loadthread.h"
#include "vk.h"
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QVariant>
#include <QEventLoop>

static QList<QVariant> images;
static int i = 0;

LoadThread::LoadThread()
{
    connect(this, SIGNAL(startLoad(QJsonValue)), this, SLOT(load(QJsonValue)), Qt::BlockingQueuedConnection);
}

void LoadThread::setData(QByteArray data)
{
    this->data = data;
}

QByteArray LoadThread::getData()
{
    return data;
}

void LoadThread::run()
{
    QJsonObject root = QJsonDocument::fromJson(data).object();
    if (!root.value("error").isUndefined() || root.value("response").toObject().value("items").toArray().isEmpty()) {
        endOfFeed = true;
        return;
    }

    for (QJsonValue object : root.value("response").toObject().value("items").toArray()) {
        i++;
        qDebug() << i;
        emit startLoad(object);
    }
}

bool LoadThread::isEndOfFeed()
{
    return endOfFeed;
}

void LoadThread::load(QJsonValue object)
{
    VK vk;
    int sourceId = object.toObject().value("source_id").toInt();
    sourceId = -sourceId;
    bool showThisPost = true;

    DataReceiver receiver(nullptr);
    receiver.setUrl("https://api.vk.com/method/groups.getById?group_id=" + QVariant(sourceId).toString() + "&access_token=" + vk.getTokenFromFile()->getValue() + "&v=5.92");

    QByteArray groupData = receiver.getData();
    QJsonObject source = QJsonDocument::fromJson(groupData).object();

    QString title = source.value("response").toArray().at(0).toObject().value("name").toString();
    QString avaUrl = source.value("response").toArray().at(0).toObject().value("photo_50").toString();

    QString text = object.toObject().value("text").toString();
    images.clear();
    for(QJsonValue contents : object.toObject().value("attachments").toArray())
    {
        if (contents.toObject().value("type").toString() != "photo") {
            showThisPost = false;
            break;
        }
        if (!contents.toObject().value("photo").isUndefined()) {
            thread = new ImagesLoadThread("ImagesLoad", contents);
            connect(thread, SIGNAL(loaded(QVariant)), this, SLOT(loadImages(QVariant)), Qt::BlockingQueuedConnection);
            QEventLoop loop;
            connect(thread, SIGNAL(finished()), &loop, SLOT(quit()));
            thread->start();
            loop.exec();
        }
    }
    if (text == "" && images.isEmpty())
        showThisPost = false;

    emit endLoad(title, avaUrl, text, images, showThisPost);
}

void LoadThread::loadImages(QVariant url) {
    images.append(url);
}

void LoadThread::stop()
{
    if(!wait(5000)) {
        terminate();
        wait();
    }
}
