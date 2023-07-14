/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:48:14 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/11 01:29:50 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<iostream>
// #include<string>

// class test
// {
// 	private:
// 		int cont, k;
// 	public:
// 		test(int i, int j)
// 		{
// 			cont = i;
// 			k = j;
// 		}
// 		test(const test &obj)
// 		{
// 			cont = obj.cont;
// 			k = obj.k;
// 		}
// 		void display(void)
// 		{
// 			std::cout << "=====test ==== "<< cont << std::endl;
// 			std::cout << "====== test ==== " << k << std::endl;
// 		}
// };

//test::obj(test &p)
// C++ program to demonstrate getline() function

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	cout << "Please enter your name: \n";
	getline(cin, str);
	cout << "Hello, " << str
		<< " welcome to GfG !\n";

	return 0;
}


// int main()
// {
// 	test obj(4, 1);
// 	obj.display();
// 	std::cout << "============" << std::endl;
// 	test obj_1 = obj;
// 	obj_1.display();
// 	//std::cout << "Constructor clled " << obj.k << std::endl;
// }
