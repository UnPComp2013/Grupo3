#include "dados.h"
#include "ui_dados.h"

Dados::Dados(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dados)
{
    ui->setupUi(this);
}

Dados::~Dados()
{
    delete ui;
}
