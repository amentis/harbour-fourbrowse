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

    QList<QObject*> result;

    if (reply->error() == QNetworkReply::NoError){

        QString replyString = (QString)reply->readAll();

        QJsonDocument jsonResponse = QJsonDocument::fromJson(replyString.toUtf8());

        QJsonArray root = jsonResponse.array();

        for (int i = 0; i < root.size(); ++i) {
            QJsonObject threadsObject = root[i].toObject();

            QJsonArray threads = threadsObject["threads"].toArray();

            for (int j = 0; j < threads.size(); ++j) {

                QJsonObject thread = threads[i].toObject();

                result.append((QObject*) new Thread(
                                   thread["no"].toInt(),
                               thread["now"].toString(),
                        thread["name"].toString(),
                        thread["com"].toString(),
                        thread["filename"].toString(),
                        thread["ext"].toString(),
                        thread["w"].toInt(),
                        thread["h"].toInt(),
                        thread["tn_w"].toInt(),
                        thread["tn_h"].toInt(),
                        thread["tim"].toInt(),
                        thread["time"].toInt(),
                        thread["md5"].toString(),
                        thread["fsize"].toInt(),
                        thread["resto"].toInt(),
                        thread["bumplimit"].toInt(),
                        thread["imagelimit"].toInt(),
                        thread["semantic_url"].toString(),
                        thread["replies"].toInt(),
                        thread["images"].toInt()));

            }
        }

        delete reply;
    }

    return result;

}
