#pragma once

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string name);
		void		setType(std::string type);
		std::string	get_Type();
		~Weapon();
};
