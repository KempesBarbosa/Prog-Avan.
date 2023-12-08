/********************************************************************************
** Form generated from reading UI file 'incluircd.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRCD_H
#define UI_INCLUIRCD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirCD
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *titulo;
    QLabel *llabel;
    QLabel *plabel;
    QLabel *dlabel;
    QLineEdit *nomedit;
    QLineEdit *pedit;
    QLineEdit *dedit;

    void setupUi(QDialog *IncluirCD)
    {
        if (IncluirCD->objectName().isEmpty())
            IncluirCD->setObjectName(QString::fromUtf8("IncluirCD"));
        IncluirCD->resize(300, 200);
        buttonBox = new QDialogButtonBox(IncluirCD);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(75, 150, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        titulo = new QLabel(IncluirCD);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(120, 30, 81, 16));
        titulo->setAlignment(Qt::AlignCenter);
        llabel = new QLabel(IncluirCD);
        llabel->setObjectName(QString::fromUtf8("llabel"));
        llabel->setGeometry(QRect(20, 60, 49, 16));
        plabel = new QLabel(IncluirCD);
        plabel->setObjectName(QString::fromUtf8("plabel"));
        plabel->setGeometry(QRect(20, 90, 49, 16));
        dlabel = new QLabel(IncluirCD);
        dlabel->setObjectName(QString::fromUtf8("dlabel"));
        dlabel->setGeometry(QRect(20, 120, 71, 16));
        nomedit = new QLineEdit(IncluirCD);
        nomedit->setObjectName(QString::fromUtf8("nomedit"));
        nomedit->setGeometry(QRect(100, 60, 181, 20));
        pedit = new QLineEdit(IncluirCD);
        pedit->setObjectName(QString::fromUtf8("pedit"));
        pedit->setGeometry(QRect(100, 90, 181, 20));
        dedit = new QLineEdit(IncluirCD);
        dedit->setObjectName(QString::fromUtf8("dedit"));
        dedit->setGeometry(QRect(100, 120, 181, 20));

        retranslateUi(IncluirCD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirCD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirCD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirCD);
    } // setupUi

    void retranslateUi(QDialog *IncluirCD)
    {
        IncluirCD->setWindowTitle(QCoreApplication::translate("IncluirCD", "Incluir CD", nullptr));
        titulo->setText(QCoreApplication::translate("IncluirCD", "INCLUIR CD", nullptr));
        llabel->setText(QCoreApplication::translate("IncluirCD", "Nome:", nullptr));
        plabel->setText(QCoreApplication::translate("IncluirCD", "Pre\303\247o:", nullptr));
        dlabel->setText(QCoreApplication::translate("IncluirCD", "Num Faixas:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirCD: public Ui_IncluirCD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRCD_H
