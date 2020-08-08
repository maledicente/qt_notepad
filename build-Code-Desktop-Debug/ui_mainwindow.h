/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_como;
    QAction *actionFechar;
    QAction *actionCopiar;
    QAction *actionRecortar;
    QAction *actionColar;
    QAction *actionDesfazer;
    QAction *actionRefazer;
    QAction *actionInfo;
    QAction *actionFonte;
    QAction *actionCor;
    QAction *actionCor_de_Fundo;
    QAction *actionImprimir;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuSobre;
    QMenu *menuFormatar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(468, 363);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/new-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/open-file-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon2);
        actionSalvar_como = new QAction(MainWindow);
        actionSalvar_como->setObjectName(QString::fromUtf8("actionSalvar_como"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar_como->setIcon(icon3);
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QString::fromUtf8("actionFechar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFechar->setIcon(icon4);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName(QString::fromUtf8("actionRecortar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecortar->setIcon(icon6);
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName(QString::fromUtf8("actionColar"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColar->setIcon(icon7);
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName(QString::fromUtf8("actionDesfazer"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesfazer->setIcon(icon8);
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName(QString::fromUtf8("actionRefazer"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/remake.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefazer->setIcon(icon9);
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon10);
        actionFonte = new QAction(MainWindow);
        actionFonte->setObjectName(QString::fromUtf8("actionFonte"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFonte->setIcon(icon11);
        actionCor = new QAction(MainWindow);
        actionCor->setObjectName(QString::fromUtf8("actionCor"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/color-wheel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCor->setIcon(icon12);
        actionCor_de_Fundo = new QAction(MainWindow);
        actionCor_de_Fundo->setObjectName(QString::fromUtf8("actionCor_de_Fundo"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/icons/color-dropper.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCor_de_Fundo->setIcon(icon13);
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName(QString::fromUtf8("actionImprimir"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon14);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 451, 271));
        textEdit->setAutoFillBackground(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 468, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        menuFormatar = new QMenu(menubar);
        menuFormatar->setObjectName(QString::fromUtf8("menuFormatar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuFormatar->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionFechar);
        menuEditar->addAction(actionDesfazer);
        menuEditar->addAction(actionRefazer);
        menuEditar->addSeparator();
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addAction(actionColar);
        menuSobre->addAction(actionInfo);
        menuFormatar->addAction(actionFonte);
        menuFormatar->addAction(actionCor);
        menuFormatar->addAction(actionCor_de_Fundo);
        toolBar->addAction(actionNovo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionSalvar_como);
        toolBar->addSeparator();
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionRecortar);
        toolBar->addAction(actionColar);
        toolBar->addSeparator();
        toolBar->addAction(actionDesfazer);
        toolBar->addAction(actionRefazer);
        toolBar->addSeparator();
        toolBar->addAction(actionInfo);
        toolBar->addSeparator();
        toolBar->addAction(actionFechar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionSalvar_como->setText(QCoreApplication::translate("MainWindow", "Salvar como", nullptr));
        actionFechar->setText(QCoreApplication::translate("MainWindow", "Fechar", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionRecortar->setText(QCoreApplication::translate("MainWindow", "Recortar", nullptr));
        actionColar->setText(QCoreApplication::translate("MainWindow", "Colar", nullptr));
        actionDesfazer->setText(QCoreApplication::translate("MainWindow", "Desfazer", nullptr));
        actionRefazer->setText(QCoreApplication::translate("MainWindow", "Refazer", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        actionFonte->setText(QCoreApplication::translate("MainWindow", "Fonte", nullptr));
        actionCor->setText(QCoreApplication::translate("MainWindow", " Cor da Fonte", nullptr));
        actionCor_de_Fundo->setText(QCoreApplication::translate("MainWindow", "Cor de Fundo", nullptr));
        actionImprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "Ajuda", nullptr));
        menuFormatar->setTitle(QCoreApplication::translate("MainWindow", "Formatar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
