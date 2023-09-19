/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:46:51 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/19 00:22:24 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class claassStatic
{
private:
    /* data */
public:
    static int number;
    claassStatic(/* args */);
    ~claassStatic();
    static void get_no_of_topics();
};

claassStatic::claassStatic(/* args */)
{
    number += 5;
}

claassStatic::~claassStatic()
{
}
void claassStatic::get_no_of_topics()
{
    std::cout << "The number of topics alredy ==>" << number << std::endl;    
}

int claassStatic::number; // static data number is defined 

int main()
{
   // claassStatic obj;
    claassStatic::get_no_of_topics();
    // claassStatic obj1;
    // obj1.get_no_of_topics();
}