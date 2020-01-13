#pragma once
#include "traducteur.hh"

class moteur
{
public:
    moteur(traducteur t1);
private:
    void oncliccalculer();
    traducteur _t1;
};

