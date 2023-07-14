/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:26:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/14 02:16:34 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::display()
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

void Contact::add()
{
	std::string number_str;
	std::cout << "your first name : ";
	getline(std::cin, this->first_name);
	std::cout << "your last name : ";
	getline(std::cin, this->last_name);
	std::cout << "your number phone : ";
	getline(std::cin, number_str);
	this->number = std::atoi(number_str.c_str());
	std::cout << "your Nickname : ";
	getline(std::cin, this->nake_name);
	std::cout << "your darkest secret : ";
	getline(std::cin, this->darkest_secret);
}
std::string PhoneBook::rempler(void)
{
	
}

void PhoneBook::init(void)
{
	static int i;
	PhoneBook phone_ob;
	this->phone[i % 8].;
	i++;
}

int	main(void)
{
	Contact	contact;

	std::string str;
	contact.display();
	while (1)
	{
		//std::cout << ">";
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
