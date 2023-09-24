/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:28:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/24 17:48:38 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include<iostream>
#include<iomanip>
#include<cstring>
#include <cstdlib>
#include <cstdio>

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
bool	parssing_l(std::string str);
bool	parssing(std::string str);
#endif