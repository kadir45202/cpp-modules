#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    setType("WrongAnimal");
    setName();
    std::cout << "default constructor WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    *this = copy;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "default destructor WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & WrongAnimal)
{
    if (this == &WrongAnimal)
        return (*this);
    setType(WrongAnimal.type);
    setName();
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string const & type)
{
    this->type = type;
    return;
}

std::string WrongAnimal::getName() const
{
    return (_name);
}

void WrongAnimal::setName()
{
    this->_name = type;
    return ;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wronganimalzz" << std::endl;
    return ;
}