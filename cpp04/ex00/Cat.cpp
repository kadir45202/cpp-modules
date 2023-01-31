#include "Cat.hpp"

Cat::Cat(void)
{
    setType("cat");
    setName();
    std::cout << "default constructor Cat called" << std::endl;
    return ;
}

Cat::Cat(Cat const &copy)
{
    *this = copy;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "default destructor Cat called" << std::endl;
    return ;
}

Cat& Cat::operator=(Cat const & Cat)
{
    if (this == &Cat)
        return (*this);
    this->setType(Cat.type);
    this->setName();
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "MIAOUUUU" << std::endl;
    return ;
}