#include "thread.h"

Thread::Thread(QObject *parent) :
    QObject(parent){
}

Thread::Thread(quint64 no, QString now, QString name, QString com, QString filename, QString ext, quint16 w, quint16 h,
               quint16 tn_w, quint16 tn_h, quint64 tim, quint64 time, QString md5, quint32 fsize, quint16 resto,
               quint16 bumplimit, quint16 imagelimit, QString semantic_url, quint16 replies, quint16 images){
m_no = no;
m_now = now;
m_name = name;
m_com = com;
m_filename = filename;
m_ext = ext;
m_w = w;
m_h = h;
m_tn_h = tn_h;
m_tn_w = tn_w;
m_tim = tim;
m_time = time;
m_md5 = md5;
m_fsize = fsize;
m_resto = resto;
m_bumplimit = bumplimit;
m_imagelimit = imagelimit;
m_semantic_url = semantic_url;
m_replies = replies;
m_images = images;
}

quint64 Thread::no() const
{
    return m_no;
}

QString Thread::now() const
{
    return m_now;
}

QString Thread::name() const
{
    return m_name;
}

QString Thread::com() const
{
    return m_com;
}

QString Thread::filename() const
{
    return m_filename;
}

QString Thread::ext() const
{
    return m_ext;
}

quint16 Thread::w() const
{
    return m_w;
}

quint16 Thread::h() const
{
    return m_h;
}

quint16 Thread::tn_w() const
{
    return m_tn_w;
}

quint16 Thread::tn_h() const
{
    return m_tn_h;
}


quint64 Thread::tim() const
{
    return m_tim;
}

quint64 Thread::time() const
{
    return m_time;
}

QString Thread::md5() const
{
    return m_md5;
}

quint32 Thread::fsize() const
{
    return m_fsize;
}

quint16 Thread::resto() const
{
    return m_resto;
}

quint16 Thread::bumplimit() const
{
    return m_bumplimit;
}

quint16 Thread::imagelimit() const
{
    return m_imagelimit;
}

QString Thread::semantic_url() const
{
    return m_semantic_url;
}

quint16 Thread::replies() const
{
    return m_replies;
}

quint16 Thread::images() const
{
    return m_images;
}
