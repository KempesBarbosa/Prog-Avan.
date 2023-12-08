/// CODIGO REALIZADO POR:
/// GABRIEL SOUTO LOZANO BARBOSA
/// MATRICULA: 20190075152

#ifndef MAINLOJA_H
#define MAINLOJA_H

#include <QLabel>
#include <QMainWindow>

#include <loja.h>
#include <incluircd.h>
#include <incluirdvd.h>
#include <incluirlivro.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainLoja; }
QT_END_NAMESPACE

class MainLoja : public QMainWindow
{
    Q_OBJECT

public:
    MainLoja(QWidget *parent = nullptr);
    ~MainLoja();

private slots:
    //DOUBLE CLICK
    void on_WL_cellDoubleClicked(int row, int column);

    void on_WCD_cellDoubleClicked(int row, int column);

    void on_WDVD_cellDoubleClicked(int row, int column);

    // AÇÕES
    void on_actionLer_triggered();

    void on_actionSalvar_triggered();

    void on_actionSair_triggered();

    void on_actionIncluir_Livro_triggered();

    void on_actionIncluir_CD_triggered();

    void on_actionIncluir_DVD_triggered();

    // INCLUIR
    void slotIncluirLivro(QString nome, QString preco,QString autor);
    void slotIncluirDVD(QString nome, QString preco, QString duracao);
    void slotIncluirCD(QString nome,QString preco,QString numfaixas);

private:
    Ui::MainLoja *ui;

    // VARIAVEIS
    Loja Barbosa;
    IncluirLivro *IL;
    IncluirCD *ICD;
    IncluirDVD *IDVD;
    QLabel *Total_de_itens;

    // EXIBIR
    void mostra_total_de_itens();
    void mostra_Livros();
    void mostra_CDS();
    void mostra_DVDS();
};
#endif // MAINLOJA_H
