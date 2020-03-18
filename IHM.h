//
// Created by Hugo on 18/03/2020.
//

#ifndef TP3_IHM_H
#define TP3_IHM_H


#include <QWidget>
#include <QSlider>
#include <QProgressBar>

class IHM : public QWidget{
    Q_OBJECT
public:
    IHM();
private:
    QSlider* slider;
    QProgressBar* progressBar;
};


#endif //TP3_IHM_H
