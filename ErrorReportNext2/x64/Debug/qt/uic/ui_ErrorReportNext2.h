/********************************************************************************
** Form generated from reading UI file 'ErrorReportNext2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORREPORTNEXT2_H
#define UI_ERRORREPORTNEXT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ErrorReportNext2Class
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ErrorReportNext2Class)
    {
        if (ErrorReportNext2Class->objectName().isEmpty())
            ErrorReportNext2Class->setObjectName("ErrorReportNext2Class");
        ErrorReportNext2Class->resize(600, 400);
        centralWidget = new QWidget(ErrorReportNext2Class);
        centralWidget->setObjectName("centralWidget");
        ErrorReportNext2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ErrorReportNext2Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ErrorReportNext2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ErrorReportNext2Class);
        mainToolBar->setObjectName("mainToolBar");
        ErrorReportNext2Class->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ErrorReportNext2Class);
        statusBar->setObjectName("statusBar");
        ErrorReportNext2Class->setStatusBar(statusBar);

        retranslateUi(ErrorReportNext2Class);

        QMetaObject::connectSlotsByName(ErrorReportNext2Class);
    } // setupUi

    void retranslateUi(QMainWindow *ErrorReportNext2Class)
    {
        ErrorReportNext2Class->setWindowTitle(QCoreApplication::translate("ErrorReportNext2Class", "ErrorReportNext2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorReportNext2Class: public Ui_ErrorReportNext2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORREPORTNEXT2_H
