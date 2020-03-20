//
// Created by Hugo on 20/03/2020.
//

#include <iostream>
#include <QtWidgets/QVBoxLayout>
#include "ex2.h"
using namespace std;

ex2::ex2(QWidget *parent) : QMainWindow(parent) {
    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();

    button = new QPushButton("Fils");
    button->setToolTip("Non");
    edit = new QTextEdit("texte initial");

    mainLayout->addWidget(button);
    mainLayout->addWidget(edit);
    mainWidget->setLayout(mainLayout);

    this->setCentralWidget(mainWidget);
    this->setWindowTitle("ex1");

    connect(button,SIGNAL(clicked()),this,SLOT(nomBoutton()));
    connect(button,SIGNAL(clicked()),this,SLOT(showEx1()));
}

void ex2::nomBouton() {
    value++;
    button->setText("Example");
    edit->insertPlainText(QString("Exemple %1 \n").arg(value));
}

void ex2::showEx1() {
    ex1* window = new ex1();
    window->show();
    this->hide();
}