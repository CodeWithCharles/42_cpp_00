/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:23:03 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 03:27:22 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {

	private:
		Contact	_contacts[8];
		int		_index;
		bool	_full;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		// Setters

		void	set_information(void);

		// Getters

		void	get_information(void)const;

		// Methods

		void	show_instruction(void);
};

#endif
