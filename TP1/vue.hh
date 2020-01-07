#pragma once
#include <QtWidgets>

class vue : public QWidget
{
public:
    vue();
    QSpinBox *getSpinbox1() const;

    QSpinBox *getSpinbox2() const;

    QComboBox *getCombobox() const;

    QPushButton *getEgal() const;

    QLCDNumber *getResultat() const;

private:
    QSpinBox* spinbox1;
    QSpinBox* spinbox2;
    QComboBox* combobox;
    QPushButton* egal;
    QLCDNumber* resultat;
};

