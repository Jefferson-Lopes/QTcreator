#include "janela3.h"
#include "ui_janela3.h"

janela3::janela3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janela3)
{
    ui->setupUi(this);
}

janela3::~janela3()
{
    delete ui;
}
