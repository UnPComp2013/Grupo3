#ifndef EXCLUIR_H
#define EXCLUIR_H

#include <QMainWindow>

namespace Ui {
class Excluir;
}

class Excluir : public QMainWindow
{
    Q_OBJECT
public slots:
    void SairExcluir();
    
public:
    explicit Excluir(QWidget *parent = 0);
    ~Excluir();
    
private:
    Ui::Excluir *ui;
};

#endif // EXCLUIR_H
