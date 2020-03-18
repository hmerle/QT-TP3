//
// Created by Hugo on 18/03/2020.
//

#include <QtWidgets/QtWidgets>
#include "IHM.h"

IHM::IHM() {
    this->setMinimumSize(200,200);
    progressBar = new QProgressBar();
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 180, 30);

    slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);

    this->setWindowTitle("IHM");
    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(progressBar);
    layout->addWidget(slider);
    this->setLayout(layout);
}