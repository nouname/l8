#ifndef GLOBALS_H
#define GLOBALS_H

#include <QDir>
#include <QFontDatabase>
#include <QString>
#include <QVariant>

static const QList<QString> PHOTO_SIZES = {"75", "130", "604", "807", "1280", "2650"};
static const QString AT_ERR = "access denied";
static const QString NO_ERR = "no error";
static const QString DATA_FILE_ERR = "can't fetch data from file";
static const char DELIMITER = '/';
static const QString APP_DIR = QDir::currentPath() + DELIMITER;

#endif // GLOBALS_H
