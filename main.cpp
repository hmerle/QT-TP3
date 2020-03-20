#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "ex1.h"
#include "ex2.h"



int main(int argc, char** argv) {
    QApplication app(argc, argv);
    ex2 window;
    window.show();
    return app.exec();
}