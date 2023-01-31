#pragma once 
#include <iostream>
#include <string>

class AAnimal
{

public:

    AAnimal(void);
    AAnimal(AAnimal const &);
    virtual ~AAnimal(void);
    AAnimal &operator=(AAnimal const &);
    
    std::string getType() const;
    void        setType(std::string const & type);
    std::string getName() const;
    void        setName();
    virtual void makeSound() const = 0;

protected:

    std::string type;

private:

    std::string _name;

};