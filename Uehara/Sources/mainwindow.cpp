#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Entrar, SIGNAL(clicked()), this, SLOT(ativarAdministrador()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ativarAdministrador()
{
    this->close();
    TelaAdmin.show();
}
