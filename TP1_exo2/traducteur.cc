#include "traducteur.hh"
#include "moteur.hh"


traducteur::traducteur()
//    :s1(_v1.getSpinbox1()->text().toStdString()), s2(_v1.getSpinbox2()->text().toStdString()), ope(_v1.getCombobox()->currentText().toStdString())
{
    QObject::connect(this, &traducteur::signalTraducteur, &_m1, &moteur::calculer);
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



void traducteur::calcul_slot(std::string s1, std::string s2, std::string o)
{
    emit signalTraducteur(s1, s2, o);
}


