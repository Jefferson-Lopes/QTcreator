#include "janela4.h"
#include "ui_janela4.h"

Janela4::Janela4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Janela4)
{
    ui->setupUi(this);
}

Janela4::~Janela4()
{
    delete ui;
}
