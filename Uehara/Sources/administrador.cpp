#include "administrador.h"
#include "ui_administrador.h"

Administrador::Administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Administrador)
{
    ui->setupUi(this);
    connect(ui->actionSair, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionConsultar, SIGNAL(triggered()), this, SLOT(ConsultarCoord()));
    connect(ui->actionExcluir, SIGNAL(triggered()), this, SLOT(ExcluirCoord()));
}
Administrador::~Administrador()
{
    delete ui;
}
void Administrador::ConsultarCoord()
{
    TelaConsultar.show();
}
void Administrador::ExcluirCoord()
{
    TelaExcluir.show();
}

