#pragma once

#include <QMainWindow>
#include "ui_ErrorReportNext2.h"

#define CONFIG_FILE_NOT_FOUND \
QMessageBox::critical(nullptr, \
    "Error!", \
    "Can't open the configuration file (In this program, \"config.ini\")!\n" \
    "Select \"Yes\" to use default configuration, Select \"No\" to close the program.", \
    (QMessageBox::Yes | QMessageBox::No) \
) \

#define MYES QMessageBox::information(nullptr, "Yes", "Yes")
#define MNO QMessageBox::information(nullptr, "No", "No")

#define INVALID_SELECT \
QMessageBox::critical(nullptr, \
    "Error!", \
    "Your selection is invalid! Program will exit with an unusual code." \
)

class ErrorReportNext2 : public QMainWindow {
    Q_OBJECT

public:
    ErrorReportNext2(QWidget *parent = nullptr);
    ~ErrorReportNext2();

private:
    Ui::ErrorReportNext2Class ui;
};
