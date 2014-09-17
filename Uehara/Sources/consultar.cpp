#include "consultar.h"
#include "ui_consultar.h"

Consultar::Consultar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Consultar)
{
    ui->setupUi(this);
}

Consultar::~Consultar()
{
    delete ui;
}
