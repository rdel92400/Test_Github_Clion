//
// Created by Romain on 01/11/2020.
//

#include "Dinosaure.h"

Dinosaure::Dinosaure() : m_nom("Pas de nom"), m_type("Pas de type") {

}

Dinosaure::Dinosaure(std::string type, std::string nom) : m_type(type), m_nom(nom) {

}

Dinosaure::~Dinosaure() {

}

void Dinosaure::deplacement() {
    std::cout << "Le dino a bouge";
}

void Dinosaure::attaque() {
    std::cout << "Le dino a attaqué" << std::endl;
}

void Dinosaure::defense() {
    std::cout << "Le dino a défendu" << std::endl;
}
