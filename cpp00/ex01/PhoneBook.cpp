/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:28:53 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 11:22:23 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

/*------------------------constructors & destructors-----------------------------*/
PhoneBook::PhoneBook()
{
	std::cout << std::endl	 << "--------------Actions--------------" << std::endl;
	std::cout << " ADD : Adds a contact in the repertory" << std::endl;
	std::cout << " SEARCH : Search a contact" << std::endl;
	std::cout << " EXIT : Exits the program" << std::endl;
	std::cout <<"-----------------------------------" << std::endl;
	this->contacts_nb = 0;
}

PhoneBook::~PhoneBook()
{ std::cout << "Finito le telephone" << std::endl; }
/*-------------------------------------------------------------------------------*/

/*------------------------setters------------------------*/
void	Contact::set_first_name(const std::string &newName)	{ this->first_name = newName; }
void	Contact::set_last_name(const std::string &newName)	{ this->last_name = newName; }
void	Contact::set_nickname(const std::string &newName)	{ this->nickname = newName; }

void	Contact::set_phone_nb(const std::string &nb)		{ this->phone_number = nb; }

void	Contact::set_secret(const std::string &secret)		{ this->secret = secret; }

void	Contact::set_index(int index)						{ this->index = index; }
/*------------------------------------------------------*/

/*-----------------------------getters------------------------------------*/
std::string	Contact::get_first_name() const	{ return (this->first_name); }

std::string Contact::get_last_name() const	{ return (this->last_name); }

std::string Contact::get_nickname() const	{ return (this->nickname); }

std::string Contact::get_phone_nb() const	{ return (this->phone_number); }

std::string Contact::get_secret() const	{ return (this->secret); }

int			Contact::get_index() const		{ return(this->index); }
/*------------------------------------------------------------------------*/

std::string get_awnser(const std::string &question)
{
	std::string name;

	while (1)
	{
		std::cout << question;
		std::getline(std::cin, name);
		if (!name.empty())
		{
			for (int i = 0; name[i]; i++)
				if (!std::isspace(name[i]))
					return (name);
		}
	}
	return ("");
}

void	PhoneBook::AddContact(void)
{
	this->contacts[this->contacts_nb % 8].set_first_name(get_awnser("Enter his/her first name: "));
	this->contacts[this->contacts_nb % 8].set_last_name(get_awnser("Enter his/her last name: "));
	this->contacts[this->contacts_nb % 8].set_nickname(get_awnser("Enter his/her nickname: "));
	this->contacts[this->contacts_nb % 8].set_phone_nb(get_awnser("Enter his/her phone number: "));
	this->contacts[this->contacts_nb % 8].set_secret(get_awnser("Enter his/her darkest secret: "));
	this->contacts[this->contacts_nb % 8].set_index(contacts_nb % 8);
	this->contacts_nb++;
	if (this->contacts_nb == 16)
		contacts_nb = 8;
}

std::string TruncString(const std::string &input)
{
	if (input.length() > 10)
	{
		std::string result = input.substr(0, 9);
		result += '.';
		return result;
	}
	else
		return input;
}

void	PhoneBook::Aff_Repo()
{
	std::string	nb;
	std::cout << "/*-----------------Repository-----------------*\\" << std::endl;
	std::cout << "/*" << std::setw(10) << "First Name" << '|';
	std::cout << std::setw(10) << "Last Name" << '|';
	std::cout << std::setw(10) << "Nickname" << '|';
	std::cout << std::setw(10) <<  "Index" << " *\\" << std::endl;
	for (int i = 0; i < 8 && i < this->contacts_nb; i++)
	{
		std::cout << "/*" << std::setw(10) << TruncString(contacts[i].get_first_name()) << '|';
		std::cout << std::setw(10) << TruncString(contacts[i].get_last_name()) << '|';
		std::cout << std::setw(10) << TruncString(contacts[i].get_nickname()) << '|';
		std::cout << std::setw(10) << contacts[i].get_index() + 1 << " *\\" << std::endl;
	}
	std::cout << "/*--------------------------------------------*\\" << std::endl;
	while (1){
		try{
			std::cout << std::endl << "Index of the person you want : ";
			std::getline(std::cin, nb);
			int	nombre = std::stoi(nb) - 1;
			if (nombre >= 0 && nombre < this->contacts_nb && nombre < 8)
			{
				std::cout << "First name	: " << contacts[nombre].get_first_name() << std::endl;
				std::cout << "Last name	: " << contacts[nombre].get_last_name() << std::endl;
				std::cout << "Nickname	: " << contacts[nombre].get_nickname() << std::endl;
				std::cout << "Phone number	: " << contacts[nombre].get_phone_nb() << std::endl;
				std::cout << "Darkest secret  : " << contacts[nombre].get_secret() << std::endl;
				break;
			}
			else
				std::cout << "Wrong index" << std::endl;
		}
		catch (const std::exception &ex){
			std::cout << "Please write an int !" << std::endl;
			std::cout << ex.what() << std::endl;
		}
	}
}
