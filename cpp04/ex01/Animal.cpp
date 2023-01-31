#include "Animal.hpp"

Animal::Animal(void)
{
    setType("Animal");
    setName();
    std::cout << "default constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(Animal const &copy)
{
    *this = copy;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "default destructor Animal called" << std::endl;
    return ;
}

Animal& Animal::operator=(Animal const & Animal)
{
    if (this == &Animal)
        return (*this);
    setType(Animal.type);
    setName();
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string const & type)
{
    this->type = type;
    return;
}

std::string Animal::getName() const
{
    return (_name);
}

void Animal::setName()
{
    this->_name = type;
    return ;
}

void Animal::makeSound() const
{
    std::cout << "animalzz" << std::endl;
    return ;
}
