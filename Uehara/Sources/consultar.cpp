#include "consultar.h"
#include "ui_consultar.h"

Consultar::Consultar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Consultar)
{
    ui->setupUi(this);
    connect(ui->SairCadastro, SIGNAL(clicked()), this, SLOT(SairConsultar()));
}

Consultar::~Consultar()
{
    delete ui;
}
void Consultar::SairConsultar()
{
    this->close();

}
