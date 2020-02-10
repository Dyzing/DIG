#pragma once
#include <iostream>


class moteur
{
public:
    moteur();
    moteur(moteur const & m1);
    std::string calculer(std::string s1, std::string s2, std::string ope);
};

