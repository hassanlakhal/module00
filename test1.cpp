/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:27:22 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/17 16:43:57 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<cstdio>
#include<iostream>
// class test1
// {
// private:
//     /* data */
// public:
//     test1(/* args */);
//     ~test1();
// };

// test1::test1(/* args */)
// {
// }

// test1::~test1()
// {
// }
// int	gl_var = 1;
// int	f(void) {return 2;}

// namespace	Foo {
// 	int	gl_var = 3;
// 	int	f(void) {return 4;}
// }

// namespace	Bar {
// 	int 	gl_var = 5;
// 	int	f(void) {return 6;}
// }

// // use namespace aliasing to keep a shorter and more expressive syntax
// // :: scope resolution operator
// namespace 	Muf = Bar;

// int	main(void){
// 	printf("gl_var:			[%d]\n", gl_var);
// 	printf("f():			[%d]\n\n", f());

// 	//exactly the same as above (global scope)
// 	printf("::gl_var:		[%d]\n", ::gl_var);
// 	printf("::f():			[%d]\n\n", ::f());

// 	printf("Foo::gl_var:		[%d]\n", Foo::gl_var);
// 	printf("Foo::f():		[%d]\n\n", Foo::f());

// 	printf("Bar::gl_var:		[%d]\n", Bar::gl_var);
// 	printf("Bar::f():		[%d]\n\n", Bar::f());

// 	printf("Muf::gl_var:		[%d]\n", Muf::gl_var);
// 	printf("Muf::f():		[%d]\n\n", Muf::f());

// 	return (0);
// }

namespace first_space
{
    void func()
    {
        std::cout << "Inside first_space" << std::endl;
    }
};
namespace second_space
{
    void func()
    {
        std::cout << "Inside second_space" << std::endl;
    }  
};
using namespace first_space;
int main()
{
    second_space::func();
    return 0;
}