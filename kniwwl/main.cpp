#include "kniffelspiel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KniffelSpiel w;
    w.show();

    return a.exec();
}
