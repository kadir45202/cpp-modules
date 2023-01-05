#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    Zombie* array = new Zombie[N];
    int i = 0;

    while(i < N)
    {
        array[i].setname(name);
        i++;
    }
    i = 0;
    return (array);
}