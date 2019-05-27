#ifndef LOADTHREAD_H
#define LOADTHREAD_H

#include "imagesloadthread.h"
#include "post.h"
#include <QJsonValue>
#include <QThread>
#include <QVariant>

class LoadThread : public QThread
{
    Q_OBJECT
    Q_PROPERTY(QByteArray data READ getData WRITE setData NOTIFY dataChanged)

public:
    void run();
    bool isEndOfFeed();
    LoadThread();

    void setData(QByteArray data);
    QByteArray getData();

signals:
    void endLoad(QString title, QString avaUrl, QString text, QList<QVariant> images, bool showThisPost);
    void startLoad(QJsonValue object);
    void dataChanged();

private slots:
    void load(QJsonValue object); void
    loadImages(QVariant url);
    void stop();

private:
    QByteArray data;
    bool endOfFeed = false;
    ImagesLoadThread *thread;
};

#endif // LOADTHREAD_H
