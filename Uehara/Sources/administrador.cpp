#include "administrador.h"
#include "ui_administrador.h"

Administrador::Administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Administrador)
{
    ui->setupUi(this);
    connect(ui->actionSair, SIGNAL(triggered()), this, SLOT(close()));
}

Administrador::~Administrador()
{
    delete ui;
}
