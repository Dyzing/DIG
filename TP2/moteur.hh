#pragma once
#include "traducteur.hh"
#include "vue.hh"
#include <iostream>


class moteur
{
public:
    moteur();
    moteur(moteur const & m1);
    moteur(traducteur const & t1);
    void oncliccalculer();
private:
    traducteur _t1;
};

