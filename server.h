#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include "thread.h"


class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);
    void startServer();
signals:

public slots:

protected:
    void incomingConnection(qintptr socketDescriptor);


};

#endif // SERVER_H
