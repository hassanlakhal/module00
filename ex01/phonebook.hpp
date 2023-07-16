/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:25:57 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/16 03:33:27 by hlakhal-         ###   ########.fr       */
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
		int ID;
	public:
		void init();
		void display_info();
		void display_all(int index);
		int get_id();
		void set_id(int index);
		std::string rempler(std::string str);
};

class PhoneBook
{
	private:
		Contact phone[8];
		int id[8];
		int number_contact;
	public:
		void add();
		void display();
		int get_number_contact();
		int get_index(int index);
		void display_all_ph(int index, std::string str_search);
};
#endif
