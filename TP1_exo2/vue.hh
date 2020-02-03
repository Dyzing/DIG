#pragma once
#include <QtWidgets>
#include <string>
#include <iostream>
#include "traducteur.hh"


class vue : public QWidget
{
    Q_OBJECT
public:
    vue();
    vue(vue const & v1);
    QSpinBox *getSpinbox1() const;

    QSpinBox *getSpinbox2() const;

    QComboBox *getCombobox() const;

    QPushButton *getEgal() const;

    QLCDNumber *getResultat() const;

    void onclickegal();

//    void emettreSignal (){ emit  signalVue(spinbox1->text().toStdString(), spinbox2->text().toStdString(), combobox->currentText().toStdString());}

signals:
    void signalVue(std::string s1, std::string s2, std::string ope);

private:
    QSpinBox* spinbox1;
    QSpinBox* spinbox2;
    QComboBox* combobox;
    QPushButton* egal;
    QLCDNumber* resultat;

    traducteur _t1;
//    moteur _m1;
//    moteur _m2;
};

