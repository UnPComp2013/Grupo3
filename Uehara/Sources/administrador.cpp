#include "administrador.h"
#include "ui_administrador.h"

Administrador::Administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Administrador)
{
    ui->setupUi(this);
    connect(ui->actionSair, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionCadastrar, SIGNAL(triggered()), this, SLOT(cadastrarCoord()));
}

Administrador::~Administrador()
{
    delete ui;
}
void Administrador::cadastrarCoord()
{
    this->close();
    TelaConsultar.show();
}
