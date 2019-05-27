#ifndef VK_H
#define VK_H

#include <QString>
#include <QObject>
#include "token.h"
#include "webviewinterface.h"

class VK : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(Token* token READ getToken WRITE setToken NOTIFY tokenChanged)
    Q_INVOKABLE void saveToken();
    Q_INVOKABLE QString checkAccess(Token *token);
    Q_INVOKABLE Token* getTokenFromFile();

    VK(QObject* parent = nullptr);
    Token* getToken();
    void setToken(Token *token);

private:
    Token* token;
    bool isError(QByteArray data);

signals:
    void tokenChanged();
};

#endif // VK_H
