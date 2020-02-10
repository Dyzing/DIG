#include "traducteur.hh"
#include "moteur.hh"


traducteur::traducteur()
{
}

traducteur::traducteur(const traducteur &t1)
{
    std::cout << "recopie traducteur.";
}


//void traducteur::afficher_resultat_corret(const int &result) const
//{
//    _v1.getResultat()->display(result);
//}

//void traducteur::afficher_resultat_faux() const
//{
//    _v1.getResultat()->display("Err");
//}



void traducteur::calcul_slot(std::string s1, std::string s2, std::string ope)
{
    try {
        std::string egalca = _m1.calculer(s1, s2, ope);
        emit signalResultat(egalca);

    }
    catch (const char *)
    {
        signalResultat("Err");
    }
}


