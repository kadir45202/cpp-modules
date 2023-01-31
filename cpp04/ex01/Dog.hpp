#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:

    Dog(void);
    Dog(Dog const &);
   virtual ~Dog(void);
    Dog &operator=(Dog const &);

    virtual void makeSound() const;

protected:

    std::string type;

private:

    std::string const _name;
    Brain*  _Brain;

};