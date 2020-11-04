//
// Created by Romain on 01/11/2020.
//

#include "Plesiosaure.h"

Plesiosaure::Plesiosaure() : Triceratops() {

}

Plesiosaure::~Plesiosaure() {

}

void Plesiosaure::deplacement() {
    Triceratops::deplacement();
    std::cout << " et dans l'eau" << std::endl;
}
