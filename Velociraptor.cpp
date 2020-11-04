//
// Created by Romain on 01/11/2020.
//

#include "Velociraptor.h"

Velociraptor::Velociraptor() : Triceratops() {

}

Velociraptor::~Velociraptor() {

}

void Velociraptor::deplacement() {
    Triceratops::deplacement();
    std::cout << " et en volant" << std::endl;
}
