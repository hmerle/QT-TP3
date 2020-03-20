//
// Created by Hugo on 20/03/2020.
//

#ifndef TP3_EX2_H
#define TP3_EX2_H


#include <QMainWindow>
#include <QObject>
#include <QPushButton>
#include <QTextEdit>
#include "ex1.h"

class ex2 : public QMainWindow{
    Q_OBJECT;
public:
    ex2(QWidget* parent = nullptr);

public slots:
    void nomBouton();
    void showEx1();
private:
    QPushButton *button;
    QTextEdit *edit;
    int value=0;
};

#endif //TP3_EX2_H
