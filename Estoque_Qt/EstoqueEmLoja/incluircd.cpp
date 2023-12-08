#include "incluircd.h"
#include "ui_incluircd.h"

IncluirCD::IncluirCD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IncluirCD)
{
    ui->setupUi(this);
}

IncluirCD::~IncluirCD()
{
    delete ui;
}

void IncluirCD::clear(){
    ui -> nomedit -> setText("");
    ui -> pedit -> setText("");
    ui -> dedit -> setText("");
}

void IncluirCD::on_buttonBox_accepted()
{
    QString nomeL, precoL, duraL;
    nomeL = ui -> nomedit -> text();
    precoL = ui -> pedit -> text();
    duraL = ui -> dedit -> text();

    emit singIncluirCD(nomeL,precoL,duraL);

    clear();
}

