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

public slots:
    void onclickegal();
    void changeResultat(std::string res_moteur);

signals:
    void signalVue(std::string s1, std::string s2, std::string ope);

private:
    QSpinBox* spinbox1;
    QSpinBox* spinbox2;
    QComboBox* combobox;
    QPushButton* egal;
    QLCDNumber* resultat;

    traducteur _t1;
};

