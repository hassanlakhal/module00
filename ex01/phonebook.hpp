/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:25:57 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/14 22:36:05 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include<iostream>
#include<iomanip>
#include<string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string darkest_secret;
		std::string number_of_phone;
		int number;
	public:
		void init();
		void search();
		void display_info();
		std::string rempler(std::string str);
};

class PhoneBook
{
	private:
		Contact phone[8];
	public:
		void add();
		void display();
		int id;
};

#endif
