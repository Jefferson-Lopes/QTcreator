#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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
    QMessageBox::about(this, "funciona", "Hello World!");
}

void MainWindow::on_sobreQT_clicked()
{
    QMessageBox::aboutQt(this, "sobre QT");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::question(this, "important message", "iae, gostou?");
}
