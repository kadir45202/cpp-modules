#include "Animal.hpp"

AAnimal::AAnimal(void)
{
    setType("AAnimal");
    setName();
    std::cout << "default constructor AAnimal called" << std::endl;
    return ;
}

AAnimal::AAnimal(AAnimal const &copy)
{
    *this = copy;
    return ;
}

AAnimal::~AAnimal(void)
{
    std::cout << "default destructor AAnimal called" << std::endl;
    return ;
}

AAnimal& AAnimal::operator=(AAnimal const & AAnimal)
{
    if (this == &AAnimal)
        return (*this);
    setType(AAnimal.type);
    setName();
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::setType(std::string const & type)
{
    this->type = type;
    return;
}

std::string AAnimal::getName() const
{
    return (_name);
}

void AAnimal::setName()
{
    this->_name = type;
    return ;
}

void AAnimal::makeSound() const
{
    std::cout << "Aanimalzz" << std::endl;
    return ;
}
