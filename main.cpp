#include "ErrorReportNext2.h"

#include <fstream>
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    std::fstream ConfigStream;
    ConfigStream.open("config.ini", std::ios::in);

    if (!ConfigStream.is_open()) {
        int ResultCritical = CONFIG_FILE_NOT_FOUND;

        if (ResultCritical == QMessageBox::Yes) {
            // Type Something Here.
            MYES;
        }
        else if (ResultCritical == QMessageBox::No) {
            //return 0;
            MNO;
        }
        else {
            INVALID_SELECT; return -1;
        }
    }

    ErrorReportNext2 w;
    w.show();
    return a.exec();
}
