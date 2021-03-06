#ifndef THREAD_H
#define THREAD_H


#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QVector>


class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(qintptr ID, QObject *parent = nullptr);

    void run();

signals:
    void error(QTcpSocket::SocketError socketerror);

public slots:
    void readyRead();
    void disconnected();

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
    QVector<qintptr> IDs;
};

#endif // THREAD_H
