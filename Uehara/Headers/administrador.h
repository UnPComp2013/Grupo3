#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QMainWindow>
#include <consultar.h>
#include <excluir.h>

namespace Ui {
class Administrador;
}

class Administrador : public QMainWindow
{
    Q_OBJECT
public slots:
    void ConsultarCoord();
    void ExcluirCoord();
public:
    Consultar TelaConsultar;
    Excluir TelaExcluir;
    explicit Administrador(QWidget *parent = 0);
    ~Administrador();
    
private:
    Ui::Administrador *ui;
};

#endif // ADMINISTRADOR_H
