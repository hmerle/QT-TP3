#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "IHM.h"
#include "ex2.h"

int exercice1(int argc, char** argv){
    QApplication app(argc, argv);
    IHM* window = new IHM;
    window->show();
    return app.exec();
}

int exercice2(int argc, char** argv){
    QApplication app(argc, argv);
    ex2* window2 = new ex2;
    window2->show();
    return app.exec();
}

int main(int argc, char** argv) {
    exercice1(argc, argv);
    exercice2(argc, argv);
    return 0;
}