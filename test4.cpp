/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:35:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/26 01:35:20 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//structural vs physical compasion 

#include <iostream>




class Sample
{
public:
	Sample(int v);
	~Sample(void);

	int	getFoo(void) const;
	int	compare(Sample *other) const ;

private:
	int	_foo;
};


Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	this->_foo = 1;
	return this->_foo;
}

int	Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}

class persent
{
  std::string name;
  int age;
    
};

//structural : equality means that two objs have equavalent content 



// physical / referential 


#include <iostream>

// int main() {
//     int num1 = 10;
//     int num2 = num1; // num2 is assigned the value of num1

//     if (&num1 == &num2) {
//         std::cout << "Identity: num1 and num2 refer to the same memory location." << std::endl;
//     } else {
//         std::cout << "Non-identity: num1 and num2 refer to different memory locations." << std::endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include "Sample.class.hpp"

int	main(void)
{
	// physically different but structurally identical instances
	Sample instance1(12);
	Sample instance2(2);

	if (&instance1 == &instance1)
		std::cout << "instance 1 and instance 1 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are not physically equal" << std::endl;

	if (&instance1 == &instance2)
		std::cout << "instance 1 and instance 2 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 2 are not physically equal" << std::endl;

	if (instance1.compare(&instance1) == 0)
		std::cout << "instance 1 and instance 1 are structurally equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are not structurally equal" << std::endl;

	if (instance1.compare(&instance2) == 0)
		std::cout << "instance 1 and instance 2 are structurally equal" << std::endl;
	else
		std::cout << "instance 1 and instance 2 are not structurally equal" << std::endl;

	return (0);
}
