//
// Created by Hugo on 18/03/2020.
//

#ifndef TP3_IHM_H
#define TP3_IHM_H


#include <QWidget>
#include <QSlider>
#include <QProgressBar>

class IHM : public QMainWindow{
    Q_OBJECT
public:
    IHM(QWidget* parent = nullptr);
private:
    QSlider* slider;
    QProgressBar* progressBar;

    signals:
    void signalValueChanged(int value);
public slots:
    void slotSetValue(int value);
};


#endif //TP3_IHM_H
