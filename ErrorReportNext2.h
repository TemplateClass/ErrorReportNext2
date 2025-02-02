#pragma once

#include <QMainWindow>
#include "ui_ErrorReportNext2.h"

class ErrorReportNext2 : public QMainWindow
{
    Q_OBJECT

public:
    ErrorReportNext2(QWidget *parent = nullptr);
    ~ErrorReportNext2();

private:
    Ui::ErrorReportNext2Class ui;
};
