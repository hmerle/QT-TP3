//
// Created by Hugo on 18/03/2020.
//

#ifndef TP3_EX1_H
#define TP3_EX1_H


#include <QWidget>
#include <QSlider>
#include <QProgressBar>

class ex1 : public QMainWindow{
    Q_OBJECT
public:
    ex1(QWidget* parent = nullptr);
private:
    QSlider* slider;
    QProgressBar* progressBar;
};


#endif //TP3_EX1_H
