#include "ScavTrap.h"

#include <iostream>

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " is destroy!" << std::endl;
}

std::string ScavTrap::getName() const {
	return this->name;
}

unsigned int ScavTrap::getHp() const {
	return this->hp;
}

unsigned int ScavTrap::getEnergy() const {
	return this->energy;
}

unsigned int ScavTrap::getDmgs() const {
	return this->dmgs;
}