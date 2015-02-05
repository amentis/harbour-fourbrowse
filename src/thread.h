#ifndef THREAD_H
#define THREAD_H

#include <QObject>

class Thread : public QObject{
    Q_OBJECT
    quint64 m_no;

    QString m_now;

QString m_name;

QString m_com;

QString m_filename;

QString m_ext;

quint16 m_w;

quint16 m_h;

quint16 m_tn_w;

quint16 m_tn_h;

quint64 m_tim;

quint64 m_time;

QString m_md5;

quint32 m_fsize;

quint16 m_resto;

quint16 m_bumplimit;

quint16 m_imagelimit;

QString m_semantic_url;

quint16 m_replies;

quint16 m_images;

public:
    explicit Thread(QObject *parent = 0);

Thread(quint64 no, QString now, QString name, QString com, QString filename, QString ext, quint16 w, quint16 h,
       quint16 tn_w, quint16 tn_h, quint64 tim, quint64 time, QString md5, quint32 fsize, quint16 resto,
       quint16 bumplimit, quint16 imagelimit, QString semantic_url, quint16 replies, quint16 images);

    Q_PROPERTY(quint64 no READ no NOTIFY noChanged)
    Q_PROPERTY(QString now READ now NOTIFY nowChanged)
    Q_PROPERTY(QString name READ name NOTIFY nameChanged)
    Q_PROPERTY(QString com READ com NOTIFY comChanged)
    Q_PROPERTY(QString filename READ filename NOTIFY filenameChanged)
    Q_PROPERTY(QString ext READ ext NOTIFY extChanged)
    Q_PROPERTY(quint16 w READ w NOTIFY wChanged)
    Q_PROPERTY(quint16 h READ h NOTIFY hChanged)
    Q_PROPERTY(quint16 tn_w READ tn_w NOTIFY tn_wChanged)
    Q_PROPERTY(quint16 tn_h READ tn_h NOTIFY tn_hChanged)
    Q_PROPERTY(quint64 tim READ tim NOTIFY timChanged)
    Q_PROPERTY(quint64 time READ time NOTIFY timeChanged)
    Q_PROPERTY(QString md5 READ md5 NOTIFY md5Changed)
    Q_PROPERTY(quint32 fsize READ fsize NOTIFY fsizeChanged)
    Q_PROPERTY(quint16 resto READ resto NOTIFY restoChanged)
    Q_PROPERTY(quint16 bumplimit READ bumplimit NOTIFY bumplimitChanged)
    Q_PROPERTY(quint16 imagelimit READ imagelimit NOTIFY imagelimitChanged)
    Q_PROPERTY(QString semantic_url READ semantic_url NOTIFY semantic_urlChanged)
    Q_PROPERTY(quint16 replies READ replies NOTIFY repliesChanged)
    Q_PROPERTY(quint16 images READ images NOTIFY imagesChanged)

quint64 no() const;

QString now() const;

QString name() const;

QString com() const;

QString filename() const;

QString ext() const;

quint16 w() const;

quint16 h() const;

quint16 tn_w() const;

quint16 tn_h() const;

quint64 tim() const;

quint64 time() const;

QString md5() const;

quint32 fsize() const;

quint16 resto() const;

quint16 bumplimit() const;

quint16 imagelimit() const;

QString semantic_url() const;

quint16 replies() const;

quint16 images() const;

signals:

void noChanged(quint64 arg);

void nowChanged(QString arg);

void nameChanged(QString arg);

void comChanged(QString arg);

void filenameChanged(QString arg);

void extChanged(QString arg);

void wChanged(quint16 arg);

void hChanged(quint16 arg);

void tn_wChanged(quint16 arg);

void tn_hChanged(quint16 arg);

void timChanged(quint64 arg);

void timeChanged(quint64 arg);

void md5Changed(QString arg);

void fsizeChanged(quint32 arg);

void restoChanged(quint16 arg);

void bumplimitChanged(quint16 arg);

void imagelimitChanged(quint16 arg);

void semantic_urlChanged(QString arg);

void repliesChanged(quint16 arg);

void imagesChanged(quint16 arg);

public slots:

};



#endif // THREAD_H
