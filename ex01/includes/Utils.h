/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:34:22 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 04:48:50 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# define	PROMPT_MESSAGE			"\n\033[33mPhone Book Registry >\033[0m "
# define	EOPBR_MESSAGE			"\033[34m--- End of Phone Book registry ---\033[0m\n"
# define	SIGQUIT_MESSAGE			"You've pressed ^D. Exiting phonebook now.\n"
# define	CONTACT_ADD_SUCCESS		"\033[32mContact added successfully to Phone Book Registry.\033[0m\n"
# define	CONTACT_INDEX_MESSAGE	"This is your contact #"
# define	PBR_FULL				"The Phone Book Registry is full.\n"													\
									"To add a new contact, I will have to delete the contact I have stored at index #1.\n"	\
									"If you want to proceed, type y/Y. Else, press enter to go back to the main menu.\n"	\
									"Your choice : "
# define	BACK_TO_MAIN_MESSAGE	"Going back to main menu.\n"
# define	PROMPT_SEARCH_MESSAGE	"Please tell me which contact index I should show you (1-8, or 0 to quit):\nIndex: "
# define	EXIT_SEARCH				"Exiting search mode now.\n"
# define	SEARCH_HEADER			"|-------------------------------------------|\n"	\
									"|     Index|First Name| Last Name|  Nickname|\n"	\
									"|----------|----------|----------|----------|\n"
# define	SEARCH_FOOTER			"|-------------------------------------------|\n"
# define	CMD_MESSAGE				"\n\033[KEnter your command [ADD, SEARCH, EXIT]:\n"
# define	SEARCH_DISPLAY_CONTACT	"\033[34mDisplaying contact informations.\033[0m\n\n"

# define	ERR_INVALID_IDX_RANGE	"\033[31mOnly digits between 1 to 8 are allowed.\033[0m\n"
# define	ERR_EMPTY_CONTACT_FIELD	"\033[31mContact fields are all required.\033[0m\n"
# define	ERR_EMPTY_PBR			"\033[31mPlease add at least one contact before searching.\033[0m\n"

#endif
