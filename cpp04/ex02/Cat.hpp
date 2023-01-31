#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

public:

    Cat(void);
    Cat(Cat const &);
    virtual ~Cat(void);
    Cat &operator=(Cat const &);

    virtual void makeSound() const;

protected:

    std::string type;

private:

    std::string const _name;
    Brain*  _Brain;

};