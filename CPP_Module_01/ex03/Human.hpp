#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <memory>
#include "Weapon.hpp"

class Human
{
	public:
		Human(std::string name);
		Human(std::string name, Weapon& weapon_ref);
		~Human();
		void 	attack();
		void	setWeapon(Weapon& new_weapon);
	private:
		Weapon&		weapon;
		std::string	name;
};

#endif