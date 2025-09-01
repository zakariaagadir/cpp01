#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
     Zombie* zombie1 = new Zombie(name);
     return (zombie1);
}

void randomChump( std::string name )
{
    Zombie* zombie1 = newZombie(name);

    zombie1->announce();
    
    delete(zombie1);
}

// int main(void)
// {
//     randomChump("zaaaa");

//     return (0);
// }
