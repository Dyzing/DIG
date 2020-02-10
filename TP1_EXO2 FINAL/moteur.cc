#include "moteur.hh"


moteur::moteur()
{

}

moteur::moteur(const moteur &m1)
{
    std::cout<< "Ceci est un constructeur par recopie de moteur. " << std::endl;
}


std::string moteur::calculer(std::string s1, std::string s2, std::string ope)
{
    float f1(0), f2(0);

    if(!s1.empty())
        f1 = std::stof(s1);
    if(!s2.empty())
        f2 = std::stof(s2);

    int result;
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
        if(f2 == 0) {
//            vue::getResultat()->display("Err");
//            _t1.afficher_resultat_faux();
            throw "pas bien";
        }
        else
            result = f1 / f2;
        break;
    };

std::cout << s1 << " ceci est s1 " << std::endl;
std::cout << s2 << " ceci est s2 " << std::endl;
std::cout << ope << " ceci est ope " << std::endl;
std::cout << result << " ceci est result " << std::endl;
return std::to_string(result);



//    _t1.afficher_resultat_corret(result);
//    vue::getResultat()->display(result);

}
