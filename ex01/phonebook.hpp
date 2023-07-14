/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:25:57 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/14 01:57:40 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include<iostream>
#include<string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nake_name;
		std::string darkest_secret;
		int number;
	public:
		void add();
		void search();
		void display();
};
class PhoneBook
{
	private:
		Contact phone[8];
	public:
		void init();
		std::string rempler();
		int id;
};

#endif
