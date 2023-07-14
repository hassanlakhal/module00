/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 23:31:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/10 23:46:24 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cstring>

void convert_string(char *str)
{
	int i;
	int len;
	i = 0;
	len = strlen(str);

	while(i < len)
	{
		putchar(toupper(str[i]));
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc > 2)
		std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF." << std::endl;
	else if(argc == 2)
		convert_string(argv[1]);
	else if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
