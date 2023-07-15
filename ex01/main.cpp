/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:26:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/15 01:06:44 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void dispaly(std::string str)
{
	if(str.length() > 10)
			std::cout << std::setw(9) << str.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}

void	Contact::display_info(void)
{
	dispaly(this->first_name);
	dispaly(this->last_name);
	dispaly(this->nick_name);
	std::cout << std::endl <<"---------------------------------------------" << std::endl;
}

void	PhoneBook::display()
{
	int i;

	i = 0;
	//PhoneBook ob;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                 PhoneBook                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while(i <= this->id)
	{
		std::cout << "|" <<  std::setw(10)<< i << "|";
		this->phone[i].display_info();
		std::cout << std::endl;
		i++;
	}
}

void PhoneBook::add()
{
	static int i;
	PhoneBook phone_ob;
	this->phone[i % 8].init();
	this->id = i;
	if (this->id >= 8)
		this->id = 0;
	i++;
}

std::string Contact::rempler(std::string str)
{
	std::string number_str;
	std::string input;
	// if(!strcmp(str.c_str(),"your number phone : "))
	// 	this->number = std::atoi(number_str.c_str());
	std::cout << str;
	getline(std::cin, input);
	return input;
}

void Contact::init(void)
{
	this->first_name = rempler("your first name : ");
	this->last_name = rempler("your last name : ");
	this->nick_name = rempler("your Nickname : ");
	this->number_of_phone = rempler("your number phone : ");
	this->darkest_secret = rempler("your darkest secret : ");
}

int	main(void)
{
	PhoneBook	contact;
	std::string str;
	while (1)
	{
		std::cout << "Enter command ";
		getline(std::cin, str);
		if(!strcmp(str.c_str(),"ADD"))
			contact.add();
		else if(!strcmp(str.c_str(),"SEARCH"))
			contact.display();
		else if(!strcmp(str.c_str(),"EXIT"))
			exit(0);
		//std::cout << "Hello " << str << "\n";
		// if(!str)
		// 	break ;
	}
}
