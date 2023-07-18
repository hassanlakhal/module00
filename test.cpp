/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:48:14 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/18 20:19:32 by hlakhal-         ###   ########.fr       */
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

class Employee
{
	public:
		std::string n_name ;
		int m_id;
		double m_wage;
		void print()
		{
			std::cout << "Name " << n_name <<
			" Id: " << m_id <<
			" Wage: $" << m_wage << "\n";
		}
};
class Someting
{
	private:
		int m_val1;
		int m_val2;
		int m_val3;
	public:
		void setValue(int val)
		{

			m_val1 = val;
		}
		int getValue(){return m_val1;}
};



class Sample
{
	public:
		Sample(int v);
		~Sample(void);
		int getFoo(void) const;
		int compare(Sample *other) const;
	private:
		int _foo;
};

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}
Sample::~Sample()
{
	//i--;
	std::cout << "Destructor called" << std::endl;
	return ;
}
int Sample::compare(Sample *other) const
{
	if (this->_foo < this->getFoo())
		return (-1);
	else if (this->_foo > this->getFoo())
		return (1);
	else
		return (0);

}
int Sample::getFoo(void) const
{
	return this->_foo;
}
int main()
{
	Sample obj1(42);
	Sample obj2(42);
	if (&obj1 == &obj1)
		std::cout << "obj 1 and obj 1 are physically equal"<< std::endl;
	else
		std::cout << "obj 1 and obj 1 are not physically equal" << std::endl;
	if (&obj1 == &obj2)
		std::cout << "obj 1 and obj 2 are physically equal"<< std::endl;
	else
		std::cout << "obj 1 and obj 2 are not physically equal" << std::endl;
	if (obj1.compare(&obj1) == 0)
		std::cout << "obj 1 and obj 1 are structurally equal" << std::endl;
	else
		std::cout << "obj 1 and obj 1 are not structurally equal" << std::endl;
	if (obj2.compare(&obj1) == 0)
		std::cout << "obj 1 and obj 2 are structurally equal" << std::endl;
	else
		std::cout << "obj 1 and obj 2 are not structurally equal" << std::endl;
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
