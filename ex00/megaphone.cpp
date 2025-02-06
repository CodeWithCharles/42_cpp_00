/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:51:01 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 02:19:15 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	str_to_upper(char *str)
{
	int i = 0;
	
	while (str[i])
		std::cout << static_cast<char>(std::toupper(str[i++]));
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 1;
		while (argv[i])
			str_to_upper(argv[i++]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
