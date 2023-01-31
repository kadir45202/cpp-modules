#pragma once 
#include <iostream>
#include <string>

class Animal
{

public:

    Animal(void);
    Animal(Animal const &);
    virtual ~Animal(void);
    Animal &operator=(Animal const &);
    
    std::string getType() const;
    void        setType(std::string const & type);
    std::string getName() const;
    void        setName();
    virtual void makeSound() const;

protected:

    std::string type;

private:

    std::string _name;

};