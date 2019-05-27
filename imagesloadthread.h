#ifndef IMAGESLOADTHREAD_H
#define IMAGESLOADTHREAD_H

#include <QJsonValue>
#include <QThread>
#include <QVariant>

class ImagesLoadThread : public QThread
{
    Q_OBJECT

public:
    explicit ImagesLoadThread(QString s, QJsonValue contents);
    void run();

public slots:
    void stop();

signals:
    void loaded(QVariant imageUrl);

private:
    QString name;
    QJsonValue contents;
};

#endif // IMAGESLOADTHREAD_H
