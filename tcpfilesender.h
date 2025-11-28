#ifndef TCPFILESENDER_H
#define TCPFILESENDER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class TcpFileSender;
}
QT_END_NAMESPACE

class TcpFileSender : public QWidget
{
    Q_OBJECT

public:
    TcpFileSender(QWidget *parent = nullptr);
    ~TcpFileSender();

private:
    Ui::TcpFileSender *ui;
};
#endif // TCPFILESENDER_H
