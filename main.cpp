#include <QApplication>
#include "client.h"
#include "sender.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //QGuiApplication::setApplicationDisplayName(Client::tr("Fortune Client"));
    //Client client;
    //client.show();
    Sender sender;
    sender.show();

    return app.exec();
}
