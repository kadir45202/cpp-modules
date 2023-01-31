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
    const AAnimal *Animals[4];
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* z = new Cat();
    // const WrongAnimal* k = new WrongCat();
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
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << z->getType() << " " << std::endl;
    // std::cout << meta->getType() << " " << std::endl;
    // std::cout << k->getType() << " " << std::endl;
    // z->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // k->makeSound();
    // delete meta;
    // delete j;
    // delete k;
    // delete z;
    return 0;
}