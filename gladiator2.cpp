#include "gladiator2.h"
#include "ui_gladiator2.h"

Gladiator2::Gladiator2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gladiator2)
{
    ui->setupUi(this);
}

Gladiator2::~Gladiator2()
{
    delete ui;
}
