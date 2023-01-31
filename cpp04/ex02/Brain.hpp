#pragma once
#include "Animal.hpp"
class Brain
{

public:

    Brain(void);
    Brain(Brain const &);
    virtual ~Brain(void);
    Brain &operator=(Brain const &);

    std::string *idea[100];

};
