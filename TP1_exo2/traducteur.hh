#pragma once
#include "moteur.hh"
#include <QtWidgets>
#include <string>
#include <iostream>


class traducteur : public QWidget
{
public:
    traducteur();
    traducteur(traducteur const & t1);
    void afficher_resultat_corret(int const & result) const;
    void afficher_resultat_faux() const;
    std::string getS1() const;

    std::string getS2() const;

    char getOpe() const;

private:
    std::string s1;
    std::string s2;
    std::string ope;
//    moteur _m1;
};

