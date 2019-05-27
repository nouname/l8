#include "imagesloadthread.h"
#include <QImage>
#include <QJsonDocument>
#include <QJsonObject>
#include "consts.h"
#include "imageloader.h"

ImagesLoadThread::ImagesLoadThread(QString s, QJsonValue contents) : name(s)
{
    this->contents = contents;
}

void ImagesLoadThread::run()
{
    QJsonValue url, value;
    QString result;
    for (int i = 0; !(value = contents.toObject().value("photo").toObject().value("photo_" + PHOTO_SIZES[i])).isUndefined() && i < PHOTO_SIZES.length(); i++)
        url = value;

   result = url.toString();
   ImageLoader loader(nullptr);
   loader.setUrl(url.toString());
   QImage image = loader.getImage();

   const int w = 700;
   const int h = image.height() * w / image.width();

   result += "*" + QString::number(h);

   emit loaded(QVariant::fromValue(result));
}

void ImagesLoadThread::stop()
{
    if(!wait(5000)) {
        terminate();
        wait();
    }
}


