#pragma once
#include <QtWidgets>
#include <string>
#include <iostream>


class vue : public QWidget
{
public:
    vue();
    vue(vue const & v1);
    QSpinBox *getSpinbox1() const;

    QSpinBox *getSpinbox2() const;

    QComboBox *getCombobox() const;

    QPushButton *getEgal() const;

    QLCDNumber *getResultat() const;


//    void oncliccalculer();
private:
    QSpinBox* spinbox1;
    QSpinBox* spinbox2;
    QComboBox* combobox;
    QPushButton* egal;
    QLCDNumber* resultat;
};

