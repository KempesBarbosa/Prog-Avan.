/// CODIGO REALIZADO POR:
/// GABRIEL SOUTO LOZANO BARBOSA
/// MATRICULA: 20190075152

#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QString>
#include <QChar>
#include <QDialog>
#include <math.h>

#include "mainloja.h"
#include "ui_mainloja.h"

MainLoja::MainLoja(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainLoja)
    , Barbosa()
    , IL(nullptr)
    , ICD(nullptr)
    , IDVD(nullptr)
    , Total_de_itens(nullptr)
{
    ui->setupUi(this);

    //VARIAVEIS
    IL = new IncluirLivro(this);
    ICD = new IncluirCD(this);
    IDVD = new IncluirDVD(this);
    Total_de_itens = new QLabel(this);

    //STATUS
    statusBar() -> insertWidget(0,new QLabel("Total de itens: "));
    statusBar() -> insertWidget(1,Total_de_itens);

    //CONECTAR SINAL COM SLOTS
    connect(IL,&IncluirLivro::singIncluirLivro,
           this, &MainLoja::slotIncluirLivro);

    connect(IDVD,&IncluirDVD::singIncluirDVD,
           this, &MainLoja::slotIncluirDVD);

    connect(ICD,&IncluirCD::singIncluirCD,
           this, &MainLoja::slotIncluirCD);

    // ESTILOS
    //INTERFACE
    ui -> LL -> setStyleSheet("background:lightgray");
    ui -> LCD -> setStyleSheet("background:lightgray");
    ui -> LDVD -> setStyleSheet("background:lightgray");
    ui -> WL -> setStyleSheet("QHeaderView::section{background-color:lightgray}");
    ui -> WCD -> setStyleSheet("QHeaderView::section{background-color:lightgray}");
    ui -> WDVD -> setStyleSheet("QHeaderView::section{background-color:lightgray}");

    //LIVRO
    ui -> WL -> horizontalHeader() -> setSectionResizeMode(0,QHeaderView::Stretch);
    ui -> WL -> horizontalHeader() -> setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui -> WL -> horizontalHeader() -> setSectionResizeMode(2,QHeaderView::ResizeToContents);
    ui -> WL -> setHorizontalHeaderLabels(QStringList()<<"Nome"<<"Preço"<<"Autor");

    //CD
    ui-> WCD -> horizontalHeader() -> setSectionResizeMode(0,QHeaderView::Stretch);
    ui-> WCD -> horizontalHeader() -> setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui-> WCD -> horizontalHeader() -> setSectionResizeMode(2,QHeaderView::ResizeToContents);
    ui-> WCD -> setHorizontalHeaderLabels(QStringList()<<"Nome"<<"Preço"<<"N Faixas");

    //DVD
    ui-> WDVD -> horizontalHeader() -> setSectionResizeMode(0,QHeaderView::Stretch);
    ui-> WDVD -> horizontalHeader() -> setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui-> WDVD -> horizontalHeader() -> setSectionResizeMode(2,QHeaderView::ResizeToContents);
    ui-> WDVD -> setHorizontalHeaderLabels(QStringList()<<"Nome"<<"Preço"<<"Tempo");

    //EXIBIR
    //LIVRO
    mostra_Livros();

    //CD
    mostra_CDS();

    //DVD
    mostra_DVDS();

    //TOTAL
    mostra_total_de_itens();
};

MainLoja::~MainLoja()
{
    delete ui;
}

//EXLCUIR COM DOUBLE CLICK
void MainLoja::on_WL_cellDoubleClicked(int row, int column)
{
    if(unsigned(row) < Barbosa.getNumLivro()){
        Barbosa.excluirLivro(row);
        mostra_Livros();
        mostra_total_de_itens();
    }
    else{
        QMessageBox::critical(this,tr("Erro"),tr("Não foi posivel excluir o iten"));
    }
}

void MainLoja::on_WCD_cellDoubleClicked(int row, int column)
{
    if(unsigned(row) < Barbosa.getNumCD()){
        Barbosa.excluirCD(row);
        mostra_CDS();
        mostra_total_de_itens();
    }
    else{
        QMessageBox::critical(this,tr("Erro"),tr("Não foi posivel excluir o iten"));
    }
}


void MainLoja::on_WDVD_cellDoubleClicked(int row, int column)
{
    if(unsigned(row) < Barbosa.getNumDVD()){
        Barbosa.excluirDVD(row);
        mostra_DVDS();
        mostra_total_de_itens();
    }
    else{
        QMessageBox::critical(this,tr("Erro"),tr("Não foi posivel excluir o item"));
    }
}

//AÇÕES DE LER, SALVAR E SAIR
void MainLoja::on_actionLer_triggered()
{
    QString fileName = QFileDialog::
            getOpenFileName(this,
                            "Ler estoque",
                            QString(),
                            "Text Files (*.txt)");
    if(!Barbosa.ler(fileName.toStdString())){
        QMessageBox::critical(this,tr("Erro"),tr("Não foi possivel abrir o arquivo"));
    }

    mostra_Livros();
    mostra_CDS();
    mostra_DVDS();
}


void MainLoja::on_actionSalvar_triggered()
{
    QString fileName = QFileDialog::
            getSaveFileName(this,
                            "Salva estoque",
                            QString(),
                            "Text Files(*.txt)");
    if(!Barbosa.salvar(fileName.toStdString())){
        QMessageBox::critical(this,tr("Erro"),tr("Não foi possivel salvar o arquivo"));
    }
}


void MainLoja::on_actionSair_triggered()
{
    QCoreApplication::quit();
}

//AÇÕES DE INCLUIR ITENS
void MainLoja::on_actionIncluir_Livro_triggered()
{
    IL -> show();
}


void MainLoja::on_actionIncluir_CD_triggered()
{
    ICD -> show();
}


void MainLoja::on_actionIncluir_DVD_triggered()
{
    IDVD -> show();
}

//SLOTS DE INCLUIR
void MainLoja::slotIncluirLivro(QString nome, QString preco, QString autor)
{
    Livro novo_livro(nome.toStdString(),round(unsigned(preco.toFloat())*100.0),autor.toStdString());
    if(novo_livro.getNome() !="" && novo_livro.getPreco()>0 && novo_livro.getAutor() !="")
    {
       Barbosa.incluirLivro(novo_livro);
       mostra_Livros();
    }
    else
    {
        QMessageBox::critical(this,"Livro invalido",QString("Não foi possivel incluir o Livro:\n")+
                              "Nome= "+nome+"\nPreço= "+preco+"\nAutor= "+autor);
   }

    mostra_total_de_itens();
}

void MainLoja::slotIncluirDVD(QString nome, QString preco, QString duracao)
{
    DVD novo_DVD(nome.toStdString(),round(unsigned(preco.toFloat()*100.0)),unsigned(duracao.toInt()));
    if(novo_DVD.getNome()!="" && novo_DVD.getPreco()>0 && novo_DVD.getDuracao()>0)
    {
        Barbosa.incluirDVD(novo_DVD);
        mostra_DVDS();
    }
    else
    {
        QMessageBox::critical(this,"DVD invalido",QString("Não foi possivel incluir o DVD:\n")+
                              "Nome= "+nome+"\nPreço="+preco+"\nDuração= "+duracao);
    }

    mostra_total_de_itens();
}

void MainLoja::slotIncluirCD(QString nome, QString preco, QString numfaixas)
{
    CD novo_CD(nome.toStdString(),round(unsigned(preco.toFloat()*100)),unsigned(numfaixas.toFloat()));
    if(novo_CD.getNome() !="" && novo_CD.getPreco()>0 && novo_CD.getNumFaixas()>0 )
    {
        Barbosa.incluirCD(novo_CD);
        mostra_CDS();
    }
    else
    {
        QMessageBox::critical(this,"CD invalido",QString("Não foi possivel incluir o CD:\n")+
                              "Nome= "+nome+"\nPreço="+preco+"\nNumFaixas= "+numfaixas);
    }

    mostra_total_de_itens();
}

//FUNÇÕES PARA EXIBIR OS ITENS
void MainLoja::mostra_Livros(){

    ui -> WL -> clearContents();
    ui-> WL -> setRowCount(Barbosa.getNumLivro());

    unsigned numItens(Barbosa.getNumLivro());
    QLabel *prov;

    for (int j =0; unsigned(j) < numItens; j++)
    {
        Livro BL = Barbosa.getLivro(j);

        //COLUNA 0
        prov = new QLabel(QString(BL.getNome().c_str()));
        prov -> setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui -> WL -> setCellWidget(j,0,prov);
        //COLUNA 1
        prov = new QLabel(QString::number(BL.getPreco(),'f',2));
        prov -> setAlignment(Qt::AlignVCenter);
        ui -> WL -> setCellWidget(j,1,prov);
        //COLUNA 2
        prov = new QLabel(QString(BL.getAutor().c_str()));
        prov -> setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui -> WL -> setCellWidget(j,2,prov);

    }
}


void MainLoja::mostra_CDS(){

    ui -> WCD -> clearContents();
    ui-> WCD -> setRowCount(Barbosa.getNumCD());

    unsigned numItens(Barbosa.getNumCD());
    QLabel *prov;

    for (int j =0; unsigned(j) < numItens; j++)
    {
        CD BCD = Barbosa.getCD(j);

        //COLUNA 0
        prov = new QLabel(QString(BCD.getNome().c_str()));
        prov -> setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui -> WCD -> setCellWidget(j,0,prov);
        //COLUNA 1
        prov = new QLabel(QString::number(BCD.getPreco(),'f',2));
        prov -> setAlignment(Qt::AlignVCenter);
        ui -> WCD -> setCellWidget(j,1,prov);
        //COLUNA 2
        prov = new QLabel(QString::number(BCD.getNumFaixas()));
        prov -> setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui -> WCD -> setCellWidget(j,2,prov);

    }
}

void MainLoja::mostra_DVDS(){

    ui-> WDVD -> clearContents();
    ui-> WDVD -> setRowCount(Barbosa.getNumDVD());

    unsigned numItens(Barbosa.getNumDVD());
    QLabel *prov;

    for (int j =0; unsigned(j) < numItens; j++)
    {
        DVD BDVD = Barbosa.getDVD(j);

        //COLUNA 0
        prov = new QLabel(QString(BDVD.getNome().c_str()));
        prov -> setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui -> WDVD -> setCellWidget(j,0,prov);
        //COLUNA 1
        prov = new QLabel(QString::number(BDVD.getPreco(),'f',2));
        prov -> setAlignment(Qt::AlignVCenter);
        ui -> WDVD -> setCellWidget(j,1,prov);
        //COLUNA 2
        prov = new QLabel(QString::number(BDVD.getDuracao()));
        prov -> setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui -> WDVD -> setCellWidget(j,2,prov);

    }
}

void MainLoja::mostra_total_de_itens(){

    Total_de_itens -> setText(QString::number(Barbosa.getNumCD()+Barbosa.getNumDVD()+Barbosa.getNumLivro()));
}

