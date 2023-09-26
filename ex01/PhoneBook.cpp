/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:26:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/27 00:50:40 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::display()
{
	int	i;
	int	len;

	i = 0;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                 PhoneBook                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	len = this->number_contact;
	while (i < len)
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

	this->phone[i % 8].init();
	this->phone[i % 8].set_id(i % 8);
	this->phone[i % 8].get_id();
	this->number_contact = i + 1;
	this->id[i % 8] = this->phone[i % 8].get_id();
	if (this->number_contact >= 8)
		this->number_contact = 8;
	i++;
}

PhoneBook::PhoneBook() : number_contact(-1)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::search()
{
	int	index;

	std::string str_search;
	index = 0;
	if (this->number_contact > -1)
	{
		this->display();
		std::cout << std::endl;
		std::cout << "Enter an index : ";
		getline(std::cin, str_search);
		if (std::cin.eof())
			exit(0);
	}
	else
	{
		std::cout << "You don't have any contact" << std::endl;
		return ;
	}
	if (parssing_l(str_search))
	{
		index = atoi(str_search.c_str());
		if (index > 7 || index < 0)
			std::cout << "Sorry this index does not exist !!" << std::endl;
		else if (this->number_contact > -1 && index == this->id[index])
			this->phone[index].display_all(index);
		else
			std::cout << "Sorry this index does not exist !!" << std::endl;
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
		std::cout << "Enter a command ---> ";
		getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str == "ADD")
		{
			std::cout << std::endl;
			contact.add();
		}
		else if (str == "SEARCH")
			contact.search();
		else if (str == "EXIT")
			exit(0);
		else
			std::cout << "This command does not exist !!" << std::endl;
	}
}
