#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <QObject>

class ImageLoader : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString url)

public:
    explicit ImageLoader(QObject *parent = nullptr);
    QString getUrl() const;
    void setUrl(const QString &);
    QImage getImage() const;

signals:
        void urlChanged();
private:
    QString url;
};


#endif // IMAGELOADER_H
