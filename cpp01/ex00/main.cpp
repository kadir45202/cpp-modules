#include "Zombie.hpp"


int main()
{
	Zombie *zombie;
    zombie = newZombie("Alice");

	randomChump("Bob");
	zombie->announce();

	delete zombie;
}