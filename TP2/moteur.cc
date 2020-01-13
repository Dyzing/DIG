#include "moteur.hh"


moteur::moteur()
{

}

moteur::moteur(const moteur &m1)
{
    std::cout<< "Ceci est un constructeur par recopie de moteur. " << std::endl;
}

moteur::moteur(const traducteur &t1)
    :_t1(t1)
{

}

void moteur::oncliccalculer()
{
//    auto s1(spinbox1->text().toStdString());

//    auto s2(spinbox2->text().toStdString());
    float f1(0), f2(0);
    if(!_t1.getS1().empty())
        f1 = std::stof(_t1.getS1());
    if(!_t1.getS2().empty())
        f2 = std::stof(_t1.getS2());
//    int f1 = vue::getSpinbox1()->value();
//    int f2 = vue::getSpinbox2()->value();

//    auto ope(vue::getCombobox()->currentText().toStdString());
    int result;
    switch (_t1.getOpe()[0]) {
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
        if(f2 == 0) {
//            vue::getResultat()->display("Err");
            _t1.afficher_resultat_faux();
            return;
        }
        else
            result = f1 / f2;
        break;
    };
    _t1.afficher_resultat_corret(result);
//    vue::getResultat()->display(result);
}
