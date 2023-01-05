#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void) const
{
	if (_weapon)
		std::cout << this->_name << " attacks with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << this->_name << " does not have a weapon to attack!" << std::endl;
}