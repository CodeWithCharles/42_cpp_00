/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:52:55 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/07 10:54:40 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Utils.h"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_full = false;
	return ;
}

PhoneBook::~PhoneBook(void) { }

void	PhoneBook::set_information(void)
{
	std::string	input;

	if (this->_full == false)
	{
		std::cout << "\n" << CONTACT_INDEX_MESSAGE << this->_index + 1 << "\n\n";
		if (this->_contacts[this->_index].set_contact() == true)
		{
			if (this->_index == 7)
				this->_full = true;
			else
				this->_index++;
		}
	}
	else
	{
		std::cout << PBR_FULL;
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cout << SIGQUIT_MESSAGE;
			std::exit(0);
		}
		else if (input.compare("y") == 0 || input.compare("Y") == 0)
		{
			for (int i = 1; i < 8; i++)
				this->_contacts[i - 1] = this->_contacts[i];
			std::cout << CONTACT_INDEX_MESSAGE << this->_index + 1 << "\n";
			this->_contacts[this->_index].set_contact();
		}
		else
			std::cout << BACK_TO_MAIN_MESSAGE;
	}
}

void	PhoneBook::get_information() const
{
	std::string	input;
	int			index = -1;

	if (this->_index == 0)
	{
		std::cout << ERR_EMPTY_PBR;
		return ;
	}

	std::cout << SEARCH_HEADER;
	for (int i = 0; i <= this->_index; i++)
		this->_contacts[i].get_contact_header(i + 1);
	std::cout << SEARCH_FOOTER;
	std::cout << "\n" << PROMPT_SEARCH_MESSAGE;

	while (true)
	{
		if (!std::getline(std::cin, input))
		{
			std::cout << SIGQUIT_MESSAGE;
			std::exit(0);
		}
		
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '8')
		{
			index = input[0] - '0';
			if (index == 0)
			{
				std::cout << EXIT_SEARCH;
				return ;
			}
			if (index - 1 >= this->_index && !this->_full)
				std::cout << "\033[33mYou only have " << this->_index << " contacts saved.\033[0m\n";
			else
				break ;
		}
		else
			std::cout << ERR_INVALID_IDX_RANGE;
		std::cout << PROMPT_SEARCH_MESSAGE;
	}
	std::cout << "\n" << SEARCH_DISPLAY_CONTACT;
	this->_contacts[index - 1].get_contact(index);
}

void	PhoneBook::show_instruction(void)
{
	std::cout << CMD_MESSAGE; 
}
