/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:46:51 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/26 01:27:55 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class claassStatic
{
private:
    int k;
public:
    static int number;
    claassStatic(int x);
    ~claassStatic();
    static void get_no_of_topics();
};

int claassStatic::number = 1; // static data number is defined
// int claassStatic::k = 10000; 

claassStatic::claassStatic(int x): k(x)
{
    // x = 10;
    number = k;
}

claassStatic::~claassStatic()
{
    std::cout << "aaaaaaaa" << std::endl;
}
void claassStatic::get_no_of_topics()
{
    std::cout << "The number of topics alredy ==>" << number << std::endl;    
}


int main()
{
    // claassStatic obj(10);
    claassStatic::get_no_of_topics();
   std::cout << claassStatic::number << std::endl;
    // claassStatic obj1;
    // obj1.get_no_of_topics();
}