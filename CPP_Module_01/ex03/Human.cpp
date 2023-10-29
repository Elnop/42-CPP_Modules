#include "Human.hpp"
#include "Weapon.hpp"

Human::Human(std::string name)
{
	this->name = name;

}

Human::Human(std::string name, Weapon& weapon_ref)
{
	this->name = name;
	this->weapon = weapon_ref;
}

Human::~Human(){}

void 	Human::attack()
{
	std::cout << name + " attacks with their " + weapon.type + "\n";
}
void	Human::setWeapon(Weapon& new_weapon_ref)
{
	this->weapon = new_weapon_ref;
}