#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "default constructor Brain called" << std::endl;
    return ;
}

Brain::Brain(Brain const &copy)
{
    *this = copy;
    return ;
}

Brain::~Brain(void)
{
    std::cout << "default destructor Brain called" << std::endl;
    return ;
}

Brain &Brain::operator=(Brain const & Brain)
{
    (void)Brain;
    return (*this);
}