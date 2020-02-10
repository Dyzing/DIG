#pragma once
#include "moteur.hh"
#include <QtWidgets>
#include <string>
#include <iostream>


class traducteur : public QWidget
{
    Q_OBJECT
public:
    traducteur();
    traducteur(traducteur const & t1);
    void afficher_resultat_corret(int const & result) const;
    void afficher_resultat_faux() const;


private:
    moteur _m1;

public slots:
    void calcul_slot (std::string s1, std::string s2, std::string ope);

signals:
    void signalResultat(std::string resultat);
};

