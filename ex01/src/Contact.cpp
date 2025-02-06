/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:39:09 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 04:58:28 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Utils.h"

std::string	Contact::_fields_name[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return ;
}

Contact::~Contact() { }

bool	Contact::set_contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << Contact::_fields_name[i] << ": ";
		while (!(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << SIGQUIT_MESSAGE;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << ERR_EMPTY_CONTACT_FIELD;
				std::cout << Contact::_fields_name[i] << ": ";
			}
		}
	}
	std::cout << CONTACT_ADD_SUCCESS;
	return (true);
}

void	Contact::get_contact_header(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->_informations[i].length() > 10)
			std::cout << this->_informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_informations[i];
	}
	std::cout << "|\n";
}

void	Contact::get_contact(int index = -1) const
{
	if (index != -1)
		std::cout << std::left << std::setw(14) << "Contact Index" << " : #" << index << "\n";
	for (int i = FirstName; i <= DarkestSecret; i++)
		std::cout << std::left << std::setw(14) << this->_fields_name[i] << " : " << this->_informations[i] << "\n";
	std::cout << "\n";
}
