#include "incluirdvd.h"
#include "ui_incluirdvd.h"

IncluirDVD::IncluirDVD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IncluirDVD)
{
    ui->setupUi(this);
}

IncluirDVD::~IncluirDVD()
{
    delete ui;
}

void IncluirDVD::clear(){
    ui -> nomedit -> setText("");
    ui -> pedit -> setText("");
    ui -> fedit -> setText("");
}

void IncluirDVD::on_buttonBox_accepted()
{
    QString nomeL, precoL, faixaL;
    nomeL = ui -> nomedit -> text();
    precoL = ui -> pedit -> text();
    faixaL = ui -> fedit -> text();

    emit singIncluirDVD(nomeL,precoL,faixaL);

    clear();
}

