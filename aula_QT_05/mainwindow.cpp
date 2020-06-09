#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, " ", "fechar programa?", QMessageBox::Yes|QMessageBox::No);

    if (resposta == QMessageBox::Yes)
        this->close();
    else
        //QMessageBox::about(this, " ", "obrigado por continuar!");
        qDebug() << "programa não foi fechado";
}
