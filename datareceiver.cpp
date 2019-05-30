#include "datareceiver.h"
#include "globals.h"
#include "webviewinterface.h"
#include <QApplication>
#include <QEventLoop>
#include <QNetworkAccessManager>
#include <QNetworkDiskCache>
#include <QNetworkReply>
#include <QSslConfiguration>
#include <QTimer>

static QString filename;

DataReceiver::DataReceiver(QObject *parent) :
    QObject (parent)
{

}

QByteArray DataReceiver::getData() {
    QEventLoop loop;
    QNetworkAccessManager manager;
    QNetworkRequest request(url);
    QNetworkReply *reply = manager.get(request);
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    loop.deleteLater();
    QByteArray data = reply->readAll();
    manager.deleteLater();
    reply->deleteLater();
    return data;
}

void DataReceiver::setUrl(QString url)
{
    this->url = url;
}

QString DataReceiver::getUrl()
{
    return url;
}

