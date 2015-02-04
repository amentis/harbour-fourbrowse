#include "backend.h"
#include <QDebug>

Backend::Backend(QObject *parent) :
    QObject(parent){
}

QList<QObject *> Backend::listThreads(QString board){

    QEventLoop eventLoop;

    QNetworkAccessManager manager;
    connect(&manager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));

    QNetworkRequest request(QUrl(QString("https://a.4cdn.org/%1/catalog.json").arg(board)));
    QNetworkReply *reply = manager.get(request);
    eventLoop.exec();

    if (reply->error() == QNetworkReply::NoError){
        QString replyString = (QString)reply->readAll();

        QJsonDocument jsonResponse = QJsonDocument::fromJson(replyString.toUtf8());

        QJsonObject jsonObject = jsonResponse.object();

        qDebug() << jsonObject.keys();

        qDebug() << jsonObject["threads"].toString();

        delete reply;
    }

    QList<QObject*> result;

    return result;

}
