#include "moteur.hh"

moteur::moteur(traducteur t1)
    :_t1(t1)
{
}

void moteur::oncliccalculer()
{
    auto s1(_v1.getSpinbox1()->text().toStdString());

    auto s2(_v1.getSpinbox2()->text().toStdString());
    float f1(0), f2(0);
    if(!s1.empty())
        f1 = std::stof(s1);
    if(!s2.empty())
        f2 = std::stof(s2);


    auto ope(_v1.getCombobox()->currentText().toStdString());
    float result;
    switch (ope[0]) {
    case '+':
        result = f1 + f2;
        break;
    case '-':
        result = f1 - f2;
        break;
    case '*':
        result = f1 * f2;
        break;
    case '/':
        result = f1 / f2;
        break;
    };
    _t1.getResultat()->display(QString::fromStdString(std::to_string(result)));
}
