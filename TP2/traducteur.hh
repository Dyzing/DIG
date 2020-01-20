#pragma once
#include "vue.hh"
#include "moteur.hh"
#include <QtWidgets>
#include <string>
#include <iostream>


class traducteur : public QWidget
{
public:
    traducteur();
    traducteur(traducteur const & t1);
    traducteur(vue const & v1, moteur const & m1);
    void afficher_resultat_corret(int const & result) const;
    void afficher_resultat_faux() const;
    std::string getS1() const;

    std::string getS2() const;

    std::string getOpe() const;

    vue getV1() const;

private:
    std::string s1;
    std::string s2;
    std::string ope;
    vue _v1;
//    moteur _m1;
};

