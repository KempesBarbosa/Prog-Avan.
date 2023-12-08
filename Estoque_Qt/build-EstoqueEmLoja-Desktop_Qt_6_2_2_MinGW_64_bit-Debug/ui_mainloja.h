/********************************************************************************
** Form generated from reading UI file 'mainloja.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLOJA_H
#define UI_MAINLOJA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainLoja
{
public:
    QAction *actionLer;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionIncluir_Livro;
    QAction *actionIncluir_CD;
    QAction *actionIncluir_DVD;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *LL;
    QTableWidget *WL;
    QVBoxLayout *verticalLayout;
    QLabel *LCD;
    QTableWidget *WCD;
    QVBoxLayout *verticalLayout_3;
    QLabel *LDVD;
    QTableWidget *WDVD;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuItem;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainLoja)
    {
        if (MainLoja->objectName().isEmpty())
            MainLoja->setObjectName(QString::fromUtf8("MainLoja"));
        MainLoja->resize(1000, 600);
        actionLer = new QAction(MainLoja);
        actionLer->setObjectName(QString::fromUtf8("actionLer"));
        actionSalvar = new QAction(MainLoja);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionSair = new QAction(MainLoja);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionIncluir_Livro = new QAction(MainLoja);
        actionIncluir_Livro->setObjectName(QString::fromUtf8("actionIncluir_Livro"));
        actionIncluir_CD = new QAction(MainLoja);
        actionIncluir_CD->setObjectName(QString::fromUtf8("actionIncluir_CD"));
        actionIncluir_DVD = new QAction(MainLoja);
        actionIncluir_DVD->setObjectName(QString::fromUtf8("actionIncluir_DVD"));
        centralwidget = new QWidget(MainLoja);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 981, 551));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LL = new QLabel(layoutWidget);
        LL->setObjectName(QString::fromUtf8("LL"));
        LL->setStyleSheet(QString::fromUtf8("lightgray"));
        LL->setFrameShape(QFrame::Box);
        LL->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LL);

        WL = new QTableWidget(layoutWidget);
        if (WL->columnCount() < 3)
            WL->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(211, 211, 211));
        WL->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(211, 211, 211));
        WL->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(211, 211, 211));
        WL->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        WL->setObjectName(QString::fromUtf8("WL"));
        WL->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        WL->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        WL->setTabKeyNavigation(false);
        WL->setSelectionMode(QAbstractItemView::SingleSelection);
        WL->setSelectionBehavior(QAbstractItemView::SelectRows);
        WL->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(WL);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        LCD = new QLabel(layoutWidget);
        LCD->setObjectName(QString::fromUtf8("LCD"));
        LCD->setStyleSheet(QString::fromUtf8("lightgray"));
        LCD->setFrameShape(QFrame::Box);
        LCD->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LCD);

        WCD = new QTableWidget(layoutWidget);
        if (WCD->columnCount() < 3)
            WCD->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(211, 211, 211));
        WCD->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(211, 211, 211));
        WCD->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setBackground(QColor(211, 211, 211));
        WCD->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        WCD->setObjectName(QString::fromUtf8("WCD"));
        WCD->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        WCD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        WCD->setTabKeyNavigation(false);
        WCD->setSelectionMode(QAbstractItemView::SingleSelection);
        WCD->setSelectionBehavior(QAbstractItemView::SelectRows);
        WCD->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(WCD);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        LDVD = new QLabel(layoutWidget);
        LDVD->setObjectName(QString::fromUtf8("LDVD"));
        LDVD->setStyleSheet(QString::fromUtf8("lightgray"));
        LDVD->setFrameShape(QFrame::Box);
        LDVD->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(LDVD);

        WDVD = new QTableWidget(layoutWidget);
        if (WDVD->columnCount() < 3)
            WDVD->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setBackground(QColor(211, 211, 211));
        WDVD->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setBackground(QColor(211, 211, 211));
        WDVD->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setBackground(QColor(211, 211, 211));
        WDVD->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        WDVD->setObjectName(QString::fromUtf8("WDVD"));
        WDVD->setFrameShape(QFrame::VLine);
        WDVD->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        WDVD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        WDVD->setTabKeyNavigation(false);
        WDVD->setSelectionMode(QAbstractItemView::SingleSelection);
        WDVD->setSelectionBehavior(QAbstractItemView::SelectRows);
        WDVD->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(WDVD);


        horizontalLayout->addLayout(verticalLayout_3);

        MainLoja->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainLoja);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuItem = new QMenu(menubar);
        menuItem->setObjectName(QString::fromUtf8("menuItem"));
        MainLoja->setMenuBar(menubar);
        statusbar = new QStatusBar(MainLoja);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainLoja->setStatusBar(statusbar);
        toolBar = new QToolBar(MainLoja);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainLoja->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuItem->menuAction());
        menuArquivo->addAction(actionLer);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuItem->addAction(actionIncluir_Livro);
        menuItem->addSeparator();
        menuItem->addAction(actionIncluir_CD);
        menuItem->addSeparator();
        menuItem->addAction(actionIncluir_DVD);

        retranslateUi(MainLoja);

        QMetaObject::connectSlotsByName(MainLoja);
    } // setupUi

    void retranslateUi(QMainWindow *MainLoja)
    {
        MainLoja->setWindowTitle(QCoreApplication::translate("MainLoja", "Estoque em Loja", nullptr));
        actionLer->setText(QCoreApplication::translate("MainLoja", "Ler", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainLoja", "Salvar", nullptr));
        actionSair->setText(QCoreApplication::translate("MainLoja", "Sair", nullptr));
        actionIncluir_Livro->setText(QCoreApplication::translate("MainLoja", "Incluir Livro", nullptr));
        actionIncluir_CD->setText(QCoreApplication::translate("MainLoja", "Incluir CD", nullptr));
        actionIncluir_DVD->setText(QCoreApplication::translate("MainLoja", "Incluir DVD", nullptr));
        LL->setText(QCoreApplication::translate("MainLoja", "LIVROS", nullptr));
        QTableWidgetItem *___qtablewidgetitem = WL->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = WL->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainLoja", "PRE\303\207O", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = WL->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainLoja", "N FAIXAS", nullptr));
        LCD->setText(QCoreApplication::translate("MainLoja", "CDS", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = WCD->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = WCD->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainLoja", "PRE\303\207O", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = WCD->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainLoja", "AUTOR", nullptr));
        LDVD->setText(QCoreApplication::translate("MainLoja", "DVDS", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = WDVD->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = WDVD->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainLoja", "PRE\303\207O", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = WDVD->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainLoja", "DURA\303\207\303\203O", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainLoja", "Arquivo", nullptr));
        menuItem->setTitle(QCoreApplication::translate("MainLoja", "Item", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainLoja", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainLoja: public Ui_MainLoja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLOJA_H
