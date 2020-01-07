#include "moteur.hh"

moteur::moteur(vue const & v1)
    :_v1(v1)
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
    _v1.getResultat()->display(QString::fromStdString(std::to_string(result)));
}
