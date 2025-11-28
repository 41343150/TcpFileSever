#ifndef TCPFILESENDER_H
#define TCPFILESENDER_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class TcpFileSender;
}
QT_END_NAMESPACE

class TcpFileSender : public QDialog
{
    Q_OBJECT

public:
    TcpFileSender(QWidget *parent = nullptr);
    ~TcpFileSender();

private:
    Ui::TcpFileSender *ui;
};
#endif // TCPFILESENDER_H
