#ifndef DADOS_H
#define DADOS_H

#include <QMainWindow>

namespace Ui {
class Dados;
}

class Dados : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dados(QWidget *parent = 0);
    ~Dados();

private:
    Ui::Dados *ui;
};

#endif // DADOS_H
