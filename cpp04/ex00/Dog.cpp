#include "Dog.hpp"

Dog::Dog(void)
{
    setType("Dog");
    setName();
    std::cout << "default constructor Dog called" << std::endl;
    return ;
}

Dog::Dog(Dog const &copy)
{
    *this = copy;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "default destructor Dog called" << std::endl;
    return ;
}

Dog& Dog::operator=(Dog const & Dog)
{
    if (this == &Dog)
        return (*this);
    this->type = Dog.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "WAAAAAAF" << std::endl;
    return ;
}