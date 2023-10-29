#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "nothing";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(){}

void	Weapon::setType(std::string type)
{
	this->type = type;
}