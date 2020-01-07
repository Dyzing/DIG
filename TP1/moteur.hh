#pragma once
#include "vue.hh"

class moteur
{
public:
    moteur(const vue &v1);
private:
    void oncliccalculer();
    vue _v1;
};

