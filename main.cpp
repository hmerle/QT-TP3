#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "IHM.h"

int ex1(int argc, char** argv){
    QApplication app(argc, argv);
    auto w = new IHM();
    w->show();
    return app.exec();
}

int main(int argc, char** argv) {
    ex1(argc, argv);
    return 0;
}