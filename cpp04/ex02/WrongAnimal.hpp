#pragma once 
#include <iostream>
#include <string>

class WrongAnimal
{

public:

    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &);
    virtual ~WrongAnimal(void);
    WrongAnimal &operator=(WrongAnimal const &);
    
    std::string getType() const;
    void        setType(std::string const & type);
    std::string getName() const;
    void        setName();
    void makeSound() const;

protected:

    std::string type;

private:

    std::string _name;

};