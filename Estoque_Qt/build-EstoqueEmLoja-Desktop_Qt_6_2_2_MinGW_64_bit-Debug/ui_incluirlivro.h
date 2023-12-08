/********************************************************************************
** Form generated from reading UI file 'incluirlivro.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRLIVRO_H
#define UI_INCLUIRLIVRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirLivro
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *titulo;
    QLabel *nlabel;
    QLabel *plabel;
    QLabel *alabel;
    QLineEdit *nomedit;
    QLineEdit *pedit;
    QLineEdit *aedit;

    void setupUi(QDialog *IncluirLivro)
    {
        if (IncluirLivro->objectName().isEmpty())
            IncluirLivro->setObjectName(QString::fromUtf8("IncluirLivro"));
        IncluirLivro->resize(300, 200);
        buttonBox = new QDialogButtonBox(IncluirLivro);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(75, 150, 161, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        titulo = new QLabel(IncluirLivro);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(100, 20, 121, 20));
        nlabel = new QLabel(IncluirLivro);
        nlabel->setObjectName(QString::fromUtf8("nlabel"));
        nlabel->setGeometry(QRect(20, 60, 49, 16));
        plabel = new QLabel(IncluirLivro);
        plabel->setObjectName(QString::fromUtf8("plabel"));
        plabel->setGeometry(QRect(20, 90, 49, 16));
        alabel = new QLabel(IncluirLivro);
        alabel->setObjectName(QString::fromUtf8("alabel"));
        alabel->setGeometry(QRect(20, 120, 49, 16));
        nomedit = new QLineEdit(IncluirLivro);
        nomedit->setObjectName(QString::fromUtf8("nomedit"));
        nomedit->setGeometry(QRect(100, 60, 181, 20));
        pedit = new QLineEdit(IncluirLivro);
        pedit->setObjectName(QString::fromUtf8("pedit"));
        pedit->setGeometry(QRect(100, 90, 181, 20));
        aedit = new QLineEdit(IncluirLivro);
        aedit->setObjectName(QString::fromUtf8("aedit"));
        aedit->setGeometry(QRect(100, 120, 181, 20));

        retranslateUi(IncluirLivro);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirLivro, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirLivro, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirLivro);
    } // setupUi

    void retranslateUi(QDialog *IncluirLivro)
    {
        IncluirLivro->setWindowTitle(QCoreApplication::translate("IncluirLivro", "Incluir Livro", nullptr));
        titulo->setText(QCoreApplication::translate("IncluirLivro", "INCLUIR NOVO LIVRO", nullptr));
        nlabel->setText(QCoreApplication::translate("IncluirLivro", "Nome:", nullptr));
        plabel->setText(QCoreApplication::translate("IncluirLivro", "Pre\303\247o:", nullptr));
        alabel->setText(QCoreApplication::translate("IncluirLivro", "Autor:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirLivro: public Ui_IncluirLivro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRLIVRO_H
