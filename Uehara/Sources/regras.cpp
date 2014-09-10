#include "regras.h"
#include "ui_regras.h"

Regras::Regras(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Regras)
{
    ui->setupUi(this);
}

Regras::~Regras()
{
    delete ui;
}
