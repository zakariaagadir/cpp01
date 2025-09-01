#include "Zombie.hpp"

Zombie :: Zombie() : name(""){}
Zombie :: ~Zombie(){
    std::cout<< "deleted" << std::endl;
}
Zombie :: Zombie(std::string name){
    this->name = name;
}

void Zombie :: announce(){
    std::cout<< name ;
    std::cout<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}
