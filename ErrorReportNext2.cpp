#include "ErrorReportNext2.h"
#include "ui_ErrorReportNext2.h"

#include <QMessageBox>
#include <QGridLayout>

ErrorReportNext2::ErrorReportNext2(QWidget *parent)
    : QMainWindow(parent)
{
    
    QMessageBox* errorMessageBox = new QMessageBox;
    errorMessageBox->setIcon(QMessageBox::Critical);
    errorMessageBox->setWindowTitle("svchost.exe - 应用程序错误");
    errorMessageBox->setText("\"0x00000000\" 指令引用的 \"0x00000000\" 内存。该内存不能为 \"read\"。\n\n要终止程序，请单击“确定”。\n要调试程序，请单击“取消”。");
    errorMessageBox->setStyleSheet("QMessageBox QPushButton { min-height: 23.5px; min-width: 82.5px; }");
    errorMessageBox->setWindowFlags(errorMessageBox->windowFlags() | Qt::WindowCloseButtonHint);

    QPushButton* OkButton = errorMessageBox->addButton("确定", QMessageBox::ActionRole);
    QPushButton* CancelButton = errorMessageBox->addButton("取消", QMessageBox::ActionRole);

    int execResult = errorMessageBox->exec();
    ui.setupUi(this); exit(0);
}

ErrorReportNext2::~ErrorReportNext2()
{}