#include "Zombie.hpp"

int main(int argc, char **argv)
{
	int i = 0;
	if (argc != 3)
	{
		std::cout << "./zombie [nb] [name]";
		std::exit(0);
	}
	Zombie *zombies = zombieHorde(std::stoi(argv[1]), argv[2]);

	while (i < std::stoi(argv[1]))
	{
		std::cout << i;
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
}