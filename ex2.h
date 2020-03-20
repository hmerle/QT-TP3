//
// Created by Hugo on 20/03/2020.
//

#ifndef TP3_EX2_H
#define TP3_EX2_H


#include <QtWidgets>
#include <QObject>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <iostream>
#include "IHM.h"

class ex2 : public QMainWindow {
    Q_OBJECT;
public:
    ex2(QMainWindow* fenetre = 0);

public slots:
    void changeButton();
private:
    QPushButton *b1;
    QTextEdit *e1;
    int value=0;
};

#endif //TP3_EX2_H
