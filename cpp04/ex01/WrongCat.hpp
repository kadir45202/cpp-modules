#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

    WrongCat(void);
    WrongCat(WrongCat const &);
    ~WrongCat(void);
    WrongCat &operator=(WrongCat const &);

    void makeSound() const;

protected:

    std::string type;

private:

    std::string const _name;

};