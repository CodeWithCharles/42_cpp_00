/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:27:46 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 04:40:47 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "Utils.h"

int	main(void)
{
	PhoneBook	PhoneBook;
	bool		is_running = true;
	std::string	command;

	PhoneBook.show_instruction();
	std::cout << PROMPT_MESSAGE;
	while (is_running && std::getline(std::cin, command))
	{
		if (std::cin.eof() == true)
		{
			std::cout << SIGQUIT_MESSAGE;
			exit(0);
		}
		else if (command.compare("ADD") == 0)
			PhoneBook.set_information();
		else if (command.compare("SEARCH") == 0)
			PhoneBook.get_information();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << EOPBR_MESSAGE;
			is_running = false;
			continue ;
		}
		command.clear();
		PhoneBook.show_instruction();
		std::cout << PROMPT_MESSAGE;
	}
	if (is_running)
		std::cout << "\n" << SIGQUIT_MESSAGE << command << "\n" << EOPBR_MESSAGE;
	return (0);
}
