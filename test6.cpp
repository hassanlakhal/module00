/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:36:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/24 02:09:09 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//const Variables :

#include<iostream>

// int main()
// {
//     const int y = 10;
//     y = 11;
//     std::cout << y << std::endl;;
//     return 0;
// }


// const Keyword whit Pointer Variables


// int main()
// {
//     int x = 10;
//     char y  = 'M';
//     const int* i = &x;
//     const char* j = &y;
//     x = 9;
//     y = 'A';
//     std::cout << *i << " " << *j;
// }
#include <cstdio>
class Test
{
   
    int y;
    int x;
    // private:
    //     /* data */
    public:
        Test(int a);
        ~Test();
        int getNumb () const;
        void setNumb (int b);
};

Test::Test(int a)
{
    this->x = a;
}

Test::~Test()
{
    std::cout << "Destructor" << std::endl;
}

int Test::getNumb () const
{
    return x;
}

void Test::setNumb(int b)
{
    this->x = b;
    // while (1)
    // {
       
    // }
}

int main()
{
    Test obj(2);
    int i = 0;
    obj.setNumb(50) ;

    std::string a;
    char str[] = "abcs";
    a  = "abcd";
    while (a[i])
    {
        printf("%d\n",a[i]);
        i++;
    }
    printf("%d---[i = %d]\n",a[i],i);
    std::string c  = "145";
    std::string k = "145";
    if (k == c)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    std::cout << str[5] << std::endl;
    // std::cout << obj.getNumb () << std::endl;
   // obj.y = 1;
    
}