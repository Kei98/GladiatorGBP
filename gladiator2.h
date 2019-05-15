#ifndef GLADIATOR2_H
#define GLADIATOR2_H

#include <QWidget>

namespace Ui {
class Gladiator2;
}

class Gladiator2 : public QWidget
{
    Q_OBJECT

public:
    explicit Gladiator2(QWidget *parent = 0);
    ~Gladiator2();

private:
    Ui::Gladiator2 *ui;
};

#endif // GLADIATOR2_H
