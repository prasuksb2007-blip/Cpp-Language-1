/*Implementation of Switch Case*/
#include<iostream>
int main()
{
    int a,b;
    std::cout<<"Enter 1st numbers:";
    std::cin>>a;
    std::cout<<"Enter 2nd numbers:";
    std::cin>>b;
    int i;
    std::cout<<"Enter your choice (0-4):";
    std::cin>>i;
    switch(i)
    {
        case 0:std::cout<<"Exit:"<<std::endl;break;
        case 1:std::cout<<"Sum of two numbers is:"<<a+b<<std::endl;break;
        case 2:std::cout<<"Subtraction of two numbers is:"<<a-b<<std::endl;break;
        case 3:std::cout<<"Multiplication of two numbers is:"<<a*b<<std::endl;break;
        case 4:std::cout<<"Division of two numbers is:"<<a/b<<std::endl;break;
    }
    
    return 0;
}