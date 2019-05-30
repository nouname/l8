#include "vk.h"
#include "globals.h"
#include "datareceiver.h"
#include <QFile>
#include <QException>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QDir>
#include <QEventLoop>
#include <QTimer>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QStandardPaths>
#include <QWebEngineCookieStore>
#include <QWebEngineProfile>

VK::VK(QObject *parent) :
    QObject (parent)
{

}

void VK::quit() {
    emit done();
    QFile file(APP_DIR + ".data");
    file.remove();
    file.close();
}

void VK::logout(QWindow *window) {
    QStringList paths = QStandardPaths::standardLocations(QStandardPaths::DataLocation);
    for (int i = 0; i < paths.size(); i++) {
        QDir dir(paths.at(i) + "/QtWebEngine");
        if (dir.isReadable())
            dir.removeRecursively();
    }
    window->close();
}

void VK::setToken(Token* token) {
    this->token = token;
}

Token* VK::getToken() {
    return this->token;
}

QString VK::checkAccess(Token *token) {
    token = getTokenFromFile();
    if (token && !token->isEmpty()) {
        DataReceiver receiver(nullptr);
        receiver.setUrl("https://api.vk.com/method/users.get?access_token=" + token->getValue() + "&v=5.92");
        QByteArray data = receiver.getData();
        QJsonObject root = QJsonDocument::fromJson(data).object();
        return !root.value("error").isUndefined() ? AT_ERR : NO_ERR;

    } else
        return DATA_FILE_ERR;
}

Token* VK::getTokenFromFile() {
    QFile data(APP_DIR + ".data");
    bool open = data.open(QFile::ReadOnly);
    if (!open || data.pos() < 0) {
        data.close();
        return nullptr;
    }
    QByteArrayList arr = data.readAll().split(DELIMITER);
    data.close();
    Token *token = new Token();
    token->setValue(arr[0]);
    return token;
}

void VK::saveToken() {
    QString string = getToken()->getValue() + DELIMITER + "";
    QFile data(APP_DIR + ".data");
    data.open(QFile::WriteOnly);
    if(data.isOpen())
       data.write(string.toUtf8());
    data.close();
}
