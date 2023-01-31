#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    int size = 4;
    int i = -1;
    const Animal *Animals[4];

    while (++i < size)
    {
        if (i < size / 2)
            Animals[i] = new Dog();
        else
            Animals[i] = new Cat();
    }

    i = -1;
    while (++i < size)
        delete Animals[i];
    return 0;
}