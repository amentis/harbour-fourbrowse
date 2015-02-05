#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QList>
#include <QString>
#include <QEventLoop>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "thread.h"

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = 0);

    Q_INVOKABLE QList<QObject*> listThreads(QString board);

signals:

public slots:

};

#endif // BACKEND_H
