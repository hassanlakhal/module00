/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:14:38 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/18 18:11:33 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>


class firstClass
{
private:
    /* data */
public:
    std::string name;
    std::string name1;
    void getVal();
    firstClass();
    firstClass(std::string name, std::string last_name);
    ~firstClass();
};

firstClass::firstClass(std::string first_name, std::string last_name) : name(first_name),name1(last_name)
{
    // name = first_name;
    // name1 = last_name;   
}

firstClass::firstClass()
{
    name = "qqq";
    name1 = "qqq";      
}

firstClass::~firstClass()
{
       
}
void firstClass::getVal()
{
    std::cout << this->name << std::endl;
    std::cout << this->name1 << std::endl;
}
int main()
{
    firstClass obj("abcd","sssss");
    obj.getVal();
    firstClass obj1;
    obj1.getVal();
}