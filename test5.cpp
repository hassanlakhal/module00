/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:53:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/21 14:27:09 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Test
{
private:
    int y;
    int x;
public:
    void setX(int a);
    void setY(int b);
    void print();  
    Test(int x, int y);
    ~Test();
};

Test::Test(int x, int y)
{
  this->x = x;
  this->y = y;
}

Test::~Test()
{
}
void Test::setX(int a)
{
    x = a;
    // return *this;
}


void Test::setY(int b)
{
    y = b;
    //return *this;
}

void Test::print()
{
    std::cout << x << "\t"<< y << std::endl;
}

int main()
{
    Test obj(10,20);
    // int x = 20;
   // obj.setX(100);
    obj.print();
}