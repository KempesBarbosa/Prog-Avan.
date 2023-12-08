/********************************************************************************
** Form generated from reading UI file 'incluirdvd.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRDVD_H
#define UI_INCLUIRDVD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirDVD
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *nlabel;
    QLabel *plabel;
    QLabel *flabel;
    QLineEdit *nomedit;
    QLineEdit *pedit;
    QLineEdit *fedit;
    QLabel *titulo;

    void setupUi(QDialog *IncluirDVD)
    {
        if (IncluirDVD->objectName().isEmpty())
            IncluirDVD->setObjectName(QString::fromUtf8("IncluirDVD"));
        IncluirDVD->resize(300, 200);
        buttonBox = new QDialogButtonBox(IncluirDVD);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(75, 150, 171, 31));
        buttonBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nlabel = new QLabel(IncluirDVD);
        nlabel->setObjectName(QString::fromUtf8("nlabel"));
        nlabel->setGeometry(QRect(20, 60, 49, 16));
        plabel = new QLabel(IncluirDVD);
        plabel->setObjectName(QString::fromUtf8("plabel"));
        plabel->setGeometry(QRect(20, 90, 49, 16));
        flabel = new QLabel(IncluirDVD);
        flabel->setObjectName(QString::fromUtf8("flabel"));
        flabel->setGeometry(QRect(20, 120, 61, 16));
        nomedit = new QLineEdit(IncluirDVD);
        nomedit->setObjectName(QString::fromUtf8("nomedit"));
        nomedit->setGeometry(QRect(100, 60, 181, 20));
        pedit = new QLineEdit(IncluirDVD);
        pedit->setObjectName(QString::fromUtf8("pedit"));
        pedit->setGeometry(QRect(100, 90, 181, 20));
        fedit = new QLineEdit(IncluirDVD);
        fedit->setObjectName(QString::fromUtf8("fedit"));
        fedit->setGeometry(QRect(100, 120, 181, 20));
        titulo = new QLabel(IncluirDVD);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(120, 20, 71, 16));
        titulo->setAlignment(Qt::AlignCenter);

        retranslateUi(IncluirDVD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirDVD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirDVD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirDVD);
    } // setupUi

    void retranslateUi(QDialog *IncluirDVD)
    {
        IncluirDVD->setWindowTitle(QCoreApplication::translate("IncluirDVD", "Incluir DVD", nullptr));
        nlabel->setText(QCoreApplication::translate("IncluirDVD", "Nome:", nullptr));
        plabel->setText(QCoreApplication::translate("IncluirDVD", "Pre\303\247o:", nullptr));
        flabel->setText(QCoreApplication::translate("IncluirDVD", "Dura\303\247\303\243o:", nullptr));
        titulo->setText(QCoreApplication::translate("IncluirDVD", "INCLUIR DVD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirDVD: public Ui_IncluirDVD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRDVD_H
