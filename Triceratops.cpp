//
// Created by Romain on 01/11/2020.
//

#include "Triceratops.h"

Triceratops::Triceratops() : Dinosaure() {

}

Triceratops::~Triceratops()  {

}

void Triceratops::deplacement() {
    Dinosaure::deplacement();
    std::cout << " sur le sol" << std::endl;
}
