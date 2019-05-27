#ifndef POSTLOADER_H
#define POSTLOADER_H

#include "loadthread.h"

class PostLoader : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Post* data READ getData WRITE setData NOTIFY dataChanged)

public:
    PostLoader(QObject *parent = nullptr);
    void setData(Post *post);
    Post* getData();
    void getPosts(int offset);
    void timeout(int ms);

private:
     Post* data;
     void loadMore();

private slots:
    void loaded(QString title, QString avaUrl, QString text, QList<QVariant> images, bool showThisPost);

signals:
    void dataChanged();
};

#endif // POSTLOADER_H