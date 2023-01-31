#pragma once
#include "Animal.hpp"

class Cat : public Animal
{

public:

    Cat(void);
    Cat(Cat const &);
    ~Cat(void);
    Cat &operator=(Cat const &);

    virtual void makeSound() const;

protected:

    std::string type;

private:

    std::string const _name;

};