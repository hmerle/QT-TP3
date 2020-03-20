//
// Created by Hugo on 20/03/2020.
//

#include "ex2.h"
using namespace std;

ex2::ex2(QMainWindow *fenetre) {
    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();

    b1 = new QPushButton("Fils");
    b1->setToolTip("Non");
    e1 = new QTextEdit("texte initial");

    mainLayout->addWidget(b1);
    mainLayout->addWidget(e1);
    mainWidget->setLayout(mainLayout);

    this->setCentralWidget(mainWidget);
    this->setWindowTitle("IHM");

    QObject::connect(b1, SIGNAL (clicked()), this, SLOT (changeButton()));

}

void ex2::changeButton() {
    b1->setText("Exemple");
    b1->setToolTip("Oui");

    value++;
    QString texte = "Exemple" + QString::number(value) + "\n" + e1->toPlainText();
    e1->clear();
    e1->setText(texte);

    cout << "Exemple" << value << endl;

    int i = 10000;
    while (i > 0) {
        IHM *window = new IHM;
        window->show();
        i--;
    }
}