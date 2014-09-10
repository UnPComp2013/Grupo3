#ifndef REGRAS_H
#define REGRAS_H

#include <QMainWindow>

namespace Ui {
class Regras;
}

class Regras : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Regras(QWidget *parent = 0);
    ~Regras();
    
private:
    Ui::Regras *ui;
};

#endif // REGRAS_H
