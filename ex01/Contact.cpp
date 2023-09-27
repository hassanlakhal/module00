/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/27 01:27:33 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

void	Contact::dispaly(std::string str)
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

void Contact::set_id(int index)
{
	if (index >= 0 && index < 8)
		this->ID = index;
}
int Contact::get_id()
{
	return (ID);
}

Contact::Contact(){}
Contact::~Contact(){}

void Contact::init(void)
{
	this->first_name = rempler("Your first name : ");
	this->last_name = rempler("Your last name : ");
	this->nick_name = rempler("Your Nickname : ");
	this->number_of_phone = rempler("Your number phone : ");
	this->darkest_secret = rempler("Your darkest secret : ");
}
bool	parssing_l(std::string str)
{
	int				i;
	unsigned int	cont;

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
	int				i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while(str[i] && isspace(str[i]))
	{
		cont++;
		i++;
	}
	if (!str[i])
		return false;
	while (str.c_str()[i])
	{
		if (isalpha(str[i]) || isspace(str[i]))
			cont++;
		i++;
	}
	if (cont == str.length())
		return (true);
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
		if (std::cin.eof())
			exit(0);
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
		else if (!str.compare("Your darkest secret : "))
			return (input);
		if (parssing(input) && flag != 1)
			return (input);
		else if (flag == 0)
			std::cout << "Invalid form for name" << std::endl;
	}
	return (input.substr(0, 0));
}

void Contact::display_all(int index)
{
	std::cout << std::endl;
	std::cout << "This info of index " << index << " :" << std::endl;
	std::cout << std::endl;
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nick name : " << this->nick_name << std::endl;
	std::cout << "Number of phone : " << this->number_of_phone << std::endl;
	std::cout << "Darkest_secret : " << this->darkest_secret << std::endl;
	std::cout << std::endl;
}