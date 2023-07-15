/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:26:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/15 19:40:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	dispaly(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}

void Contact::display_info(void)
{
	dispaly(this->first_name);
	dispaly(this->last_name);
	dispaly(this->nick_name);
}

void PhoneBook::display()
{
	int	i;

	i = 0;
	std::cout << std::endl
				<< "---------------------------------------------" << std::endl;
	std::cout << "|                 PhoneBook                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i <= this->id)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		this->phone[i].display_info();
		std::cout << std::endl;
		i++;
	}
}

void PhoneBook::add()
{
	static int	i;
	PhoneBook	phone_ob;

	this->phone[i % 8].init();
	this->id = i;
	if (this->id >= 8)
		this->id = 0;
	i++;
}

bool	parssing_l(std::string str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str.c_str()[i])
	{
		if (isdigit(str[i]))
			cont++;
		i++;
	}
	if (cont == str.length())
		return (true);
	return (false);
}

bool	parssing(std::string str)
{
	int	i;

	i = 0;
	while (str.c_str()[i])
	{
		if (isdigit(str[i]))
			return (true);
		i++;
	}
	return (false);
}

std::string Contact::rempler(std::string str)
{
	int	flag;

	std::string number_str;
	std::string input;
	flag = 0;
	while (1)
	{
		std::cout << str;
		getline(std::cin, input);
		if (!str.compare("Your number phone : "))
		{
			if (parssing_l(input))
				return (input);
			else
			{
				std::cout << "Invalid form for name" << std::endl;
				flag = 1;
			}
		}
		if (!parssing(input) && flag != 1)
			return (input);
		else if (flag == 0)
			std::cout << "Invalid form for name" << std::endl;
	}
	return (input.substr(0, 0));
}

void Contact::init(void)
{
	this->first_name = rempler("Your first name : ");
	this->last_name = rempler("Your last name : ");
	this->nick_name = rempler("Your Nickname : ");
	this->number_of_phone = rempler("Your number phone : ");
	this->darkest_secret = rempler("Your darkest secret : ");
}

int	main(void)
{
	PhoneBook	contact;

	std::string str;
	while (1)
	{
		std::cout << "Enter command ";
		getline(std::cin, str);
		if (!strcmp(str.c_str(), "ADD"))
			contact.add();
		else if (!strcmp(str.c_str(), "SEARCH"))
			contact.display();
		else if (!strcmp(str.c_str(), "EXIT"))
			exit(0);
	}
}
