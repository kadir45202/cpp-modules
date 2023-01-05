#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:
		std::string Name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	setname(std::string name);
		void 	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif