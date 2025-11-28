#include "tcpfilesender.h"
#include "ui_tcpfilesender.h"

TcpFileSender::TcpFileSender(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TcpFileSender)
{
    ui->setupUi(this);
}

TcpFileSender::~TcpFileSender()
{
    delete ui;
}
