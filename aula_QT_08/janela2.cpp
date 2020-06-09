#include "janela2.h"
#include "ui_janela2.h"

janela2::janela2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janela2)
{
    ui->setupUi(this);
}

janela2::~janela2()
{
    delete ui;
}
