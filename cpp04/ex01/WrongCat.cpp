#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    setType("Wrongcat");
    setName();
    std::cout << "default constructor WrongCat called" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const &copy)
{
    *this = copy;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "default destructor WrongCat called" << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(WrongCat const & WrongCat)
{
    if (this == &WrongCat)
        return (*this);
    this->setType(WrongCat.type);
    this->setName();
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WMIAOUUUUW" << std::endl;
    return ;
}