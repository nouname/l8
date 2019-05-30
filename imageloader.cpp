#include "imageloader.h"
#include "globals.h"
#include "datareceiver.h"
#include <QBuffer>
#include <QEventLoop>
#include <QException>
#include <QImage>
#include <QNetworkAccessManager>
#include <QNetworkProxyFactory>
#include <QNetworkReply>
#include <QWebEngineSettings>
#include <QWidget>


ImageLoader::ImageLoader(QObject *parent) : QObject (parent)
{

}

QString ImageLoader::getUrl() const
{
    return url;
}

void ImageLoader::setUrl(const QString &url) {
    this->url = url;
}

QImage ImageLoader::getImage() const
{
    QEventLoop loop;
    QNetworkAccessManager manager;
    QNetworkRequest request(url);
    QNetworkReply *reply = manager.get(request);
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    loop.deleteLater();
    reply->deleteLater();
    QImage image;
    image.load(reply, nullptr);
    return image;
}
