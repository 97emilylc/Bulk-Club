#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login logWin;
    logWin.show();

    return a.exec();
}
