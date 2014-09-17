#ifndef CONSULTAR_H
#define CONSULTAR_H

#include <QMainWindow>

namespace Ui {
class Consultar;
}

class Consultar : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Consultar(QWidget *parent = 0);
    ~Consultar();
    
private:
    Ui::Consultar *ui;
};

#endif // CONSULTAR_H
