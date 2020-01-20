#include "moteur.hh"


moteur::moteur()
{

}

moteur::moteur(const moteur &m1)
{
    std::cout<< "Ceci est un constructeur par recopie de moteur. " << std::endl;
}


void moteur::calculer(std::string s1, std::string s2, std::string ope)
{
    float f1(0), f2(0);

    if(!s1.empty())
        f1 = std::stof(s1);
    if(!s2.empty())
        f2 = std::stof(s2);

    int result;
    switch (ope) {
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
//            _t1.afficher_resultat_faux();
            return;
        }
        else
            result = f1 / f2;
        break;
    };
//    _t1.afficher_resultat_corret(result);
//    vue::getResultat()->display(result);
}
