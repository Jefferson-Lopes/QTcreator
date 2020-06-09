#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "janela2.h"
#include "janela3.h"

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
    janela2 forma2;
    forma2.exec();

}
