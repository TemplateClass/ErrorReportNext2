#include "ErrorReportNext2.h"

#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ErrorReportNext2 w;
    w.show();
    return a.exec();
}
