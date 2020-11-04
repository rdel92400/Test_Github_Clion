#include <iostream>
#include "Dinosaure.h"
#include "Triceratops.h"
#include "Ichtyosaure.h"
#include "Plesiosaure.h"
#include "Pterodactyle.h"
#include "Velociraptor.h"

int main() {
    ///Initialisation des dino
    Triceratops Trice;
    Ichtyosaure Ichty;
    Plesiosaure Plesio;
    Pterodactyle Ptera;
    Velociraptor Velo;
    ///Deplacement des dino
    Trice.deplacement();
    Ichty.deplacement();
    Plesio.deplacement();
    Ptera.deplacement();
    Velo.deplacement();
    return 0;


    //Charles
}
