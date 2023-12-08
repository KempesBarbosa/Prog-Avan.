#include "incluirlivro.h"
#include "ui_incluirlivro.h"

IncluirLivro::IncluirLivro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IncluirLivro)
{
    ui->setupUi(this);
}

IncluirLivro::~IncluirLivro()
{
    delete ui;
}

void IncluirLivro::clear(){
    ui -> nomedit -> setText("");
    ui -> pedit -> setText("");
    ui -> aedit -> setText("");
}

void IncluirLivro::on_buttonBox_accepted()
{
    QString nomeL, precoL, autorL;
    nomeL = ui -> nomedit -> text();
    precoL = ui -> pedit -> text();
    autorL = ui -> aedit -> text();

    emit singIncluirLivro(nomeL,precoL,autorL);

    clear();
}

