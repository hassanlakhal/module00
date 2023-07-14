/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:26:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/14 18:34:17 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::display()
{
	int i;

	i = 0;
	PhoneBook ob;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                 PhoneBook                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	// while(i < ob.id)
	// {

	// }
}

void PhoneBook::add()
{
	static int i;
	PhoneBook phone_ob;
	this->phone[i % 8].init();
	i++;
}
std::string Contact::rempler(std::string str)
{
	std::string number_str;
	std::string input;
	if(!strcmp(str.c_str(),"your number phone : "))
		this->number = std::atoi(number_str.c_str());
	std::cout << str;
	getline(std::cin, input);
	return input;
}

void Contact::init(void)
{
	this->first_name = rempler("your first name : ");
	this->last_name =  rempler("your last name : ");
	this->nake_name = rempler("your Nickname : ");
	this->number_of_phone = rempler("your number phone : ");
	this->darkest_secret = rempler("your darkest secret : ");
}

int	main(void)
{
	PhoneBook	contact;

	std::string str;
	contact.display();
	while (1)
	{
		std::cout << "Enter command ";
		getline(std::cin, str);
		if(!strcmp(str.c_str(),"ADD"))
			contact.add();
		else if(!strcmp(str.c_str(),"EXIT"))
			exit(0);
		//std::cout << "Hello " << str << "\n";
		// if(!str)
		// 	break ;
	}
}
