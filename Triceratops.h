//
// Created by Romain on 01/11/2020.
//

#ifndef EXO_502_TRICERATOPS_H
#define EXO_502_TRICERATOPS_H
#include "Dinosaure.h"

class Triceratops : public Dinosaure{
protected:
int m_age;
public :
    Triceratops();

    ~Triceratops();
    void deplacement();
};


#endif //EXO_502_TRICERATOPS_H
