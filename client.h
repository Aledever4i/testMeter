#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QTcpSocket>
#include <QDataStream>

QT_BEGIN_NAMESPACE
class QComboBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTcpSocket;
class QNetworkSession;
QT_END_NAMESPACE

//! [0]
class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = Q_NULLPTR);

private slots:
    void requestNewFortune();
    void readFortune();
    void displayError(QAbstractSocket::SocketError socketError);
    void enableGetFortuneButton();
    void sessionOpened();

private:
    QComboBox *hostCombo;
    QLineEdit *portLineEdit;
    QLabel *statusLabel;
    QPushButton *getFortuneButton;

    QTcpSocket *tcpSocket;
    QDataStream in;
    QString currentFortune;

    QNetworkSession *networkSession;
};
//! [0]

#endif
