/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:26:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/17 01:15:13 by hlakhal-         ###   ########.fr       */
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
	int len;

	i = 0;
	std::cout << std::endl;
	std::cout<< "---------------------------------------------" << std::endl;
	std::cout << "|                 PhoneBook                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	len = this->get_number_contact();
	while (i < len)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		this->phone[i].display_info();
		std::cout << std::endl;
		i++;
	}
}

void Contact::set_id(int index)
{
	this->ID = index;
}
int Contact::get_id()
{
	return ID;
}

void PhoneBook::add()
{
	static int	i;
	PhoneBook	phone_ob;

	this->phone[i % 8].init();
	this->phone[i % 8].set_id(i % 8);
	this->phone[i % 8].get_id();
	this->number_contact = i + 1;
	this->id[i % 8] = this->phone[i % 8].get_id();
	if (this->number_contact >= 8)
		this->number_contact = 8;
	i++;
}

int PhoneBook::get_index(int index)
{
	return this->id[index];
}

int PhoneBook::get_number_contact()
{
	return number_contact;
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
		else if(!str.compare("Your darkest secret : "))
			return (input);
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

void Contact::display_all(int index)
{
	std::cout << std::endl;
	std::cout << "This info of index " << index << " :"<< std::endl;
	std::cout << std::endl;
	std::cout << "First name : "<< this->first_name << std::endl;
	std::cout << "Last name : "<< this->last_name << std::endl;
	std::cout << "Nick name : "<< this->nick_name << std::endl;
	std::cout << "Number of phone : " << this->number_of_phone << std::endl;
	std::cout << "Darkest_secret : " << this->darkest_secret << std::endl;
	std::cout << std::endl;
}

void PhoneBook::display_all_ph(int index, std::string str_search)
{
	index = atoi(str_search.c_str());
	phone[index].display_all(index);
}

void PhoneBook::search()
{
	int			index;
	std::string str_search;
	index = 0;
	this->display();
	std::cout << std::endl;
	std::cout << "Enter index : ";
	getline(std::cin, str_search);
	if (parssing(str_search))
	{
		index = atoi(str_search.c_str());
		if(index > 7 || index < 0)
		std::cout << "Sorry this index not exist !!" << std::endl;
		else if (index == this->get_index(index))
			this->display_all_ph(index, str_search);
		else
			std::cout << "Sorry this index not exist !!" << std::endl;
	}
	else
		std::cout << "Invalid form for index" << std::endl;
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
		{
			std::cout << std::endl;
			contact.add();
		}
		else if (!strcmp(str.c_str(), "SEARCH"))
			contact.search();
		else if (!strcmp(str.c_str(), "EXIT"))
			exit(0);
		else
			std::cout << "This command not exist !!" << std::endl;
	}
}
