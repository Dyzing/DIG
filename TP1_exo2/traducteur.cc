#include "traducteur.hh"
#include "moteur.hh"


traducteur::traducteur()
//    :s1(_v1.getSpinbox1()->text().toStdString()), s2(_v1.getSpinbox2()->text().toStdString()), ope(_v1.getCombobox()->currentText().toStdString())
{

}


//void traducteur::afficher_resultat_corret(const int &result) const
//{
//    _v1.getResultat()->display(result);
//}

//void traducteur::afficher_resultat_faux() const
//{
//    _v1.getResultat()->display("Err");
//}

std::string traducteur::getS1() const
{
    return s1;
}

std::string traducteur::getS2() const
{
    return s2;
}

std::string traducteur::getOpe() const
{
    return ope;
}


