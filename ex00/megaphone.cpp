/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 23:31:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/27 00:45:24 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

void convert_string(std::string str)
{
	int i;
	i = 0;

	while(i < (int)str.length())
	{
		std::cout << char(std::toupper(str[i]));
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1; 
	if(argc >= 2)
	{
		while (i < argc)
		{
			convert_string(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	else if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
