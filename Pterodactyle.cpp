//
// Created by Romain on 01/11/2020.
//

#include "Pterodactyle.h"

Pterodactyle::Pterodactyle() : Dinosaure(){

}

Pterodactyle::~Pterodactyle() {

}

void Pterodactyle::deplacement() {
    Dinosaure::deplacement();
    std::cout << " en volant" << std::endl;
}
