//
// Created by Romain on 01/11/2020.
//

#ifndef EXO_502_DINOSAURE_H
#define EXO_502_DINOSAURE_H
#include <iostream>
#include <string>

class Dinosaure {
protected:
std::string m_type;
std::string m_nom;

public :
Dinosaure();
Dinosaure(std::string type,std::string nom);
~Dinosaure();

void deplacement();
void attaque();
void defense();
};

#endif //EXO_502_DINOSAURE_H
