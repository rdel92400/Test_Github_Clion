//
// Created by Romain on 01/11/2020.
//

#include "Ichtyosaure.h"

Ichtyosaure::Ichtyosaure() : Dinosaure() {

}

Ichtyosaure::~Ichtyosaure() {

}

void Ichtyosaure::deplacement() {
    Dinosaure::deplacement();
    std::cout << " dans 'eau" << std::endl;
}
