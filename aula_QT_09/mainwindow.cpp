#include "mainwindow.h"
#include "ui_mainwindow.h"
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


void MainWindow::on_btn_mostrar_clicked()
{
    QString nome  = ui->txt_nome->text();
    QString fone  = ui->txt_telefone->text();
    QString email = ui->txt_email->text();
    QString texto = "Nome: " + nome + "\n"
                    "Telefone: " + fone + "\n"
                    "E-mail: " + email + "\n\n";

    QMessageBox::information(this, "Dados", texto);
}

void MainWindow::on_btn_limpar_clicked()
{
    ui->txt_nome->clear();
    ui->txt_telefone->clear();
    ui->txt_email->clear();

    //ui->txt_nome->setText("teste");
    ui->txt_nome->setFocus();
}
