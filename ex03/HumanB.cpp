#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& _name): name(_name), weapon(NULL){
}

void HumanB::setWeapon(Weapon& newWeapon) {
    weapon = &newWeapon;
}


void HumanB::attack() {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " cannot attack, they have no weapon!" << std::endl;
    }
}
