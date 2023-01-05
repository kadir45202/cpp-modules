# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Zombie
{
public:
	void announce(void);
	Zombie(std::string name);
	~Zombie();
	
private:
std::string Name;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif