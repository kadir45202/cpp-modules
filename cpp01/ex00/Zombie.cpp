#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->Name = name;
}

Zombie::~Zombie()
{
	 std::cout << "Zombie " << this->Name << " deconstructed" << std::endl;
}