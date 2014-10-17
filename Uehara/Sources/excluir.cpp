#include "excluir.h"
#include "ui_excluir.h"

Excluir::Excluir(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Excluir)
{
    ui->setupUi(this);
    connect(ui->Sair, SIGNAL(clicked()), this, SLOT(SairExcluir()));
}

Excluir::~Excluir()
{
    delete ui;
}
void Excluir::SairExcluir()
{
    this->close();

}
