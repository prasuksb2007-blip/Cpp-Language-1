#include<iostream>
int main()
{
    int a,b;
    std::cout<<"Enter 1st numbers:";
    std::cin>>a;
    std::cout<<"Enter 2nd numbers:";
    std::cin>>b;
    std::cout<<"Sum of two numbers is:"<<a+b<<std::endl;
    std::cout<<"Subtraction of two numbers is:"<<a-b<<std::endl;
    std::cout<<"Multiplication of two numbers is:"<<a*b<<std::endl;
    std::cout<<"Division of two numbers is:"<<a/b<<std::endl;
    std::cout<<"Modulus of two numbers is:"<<a%b<<std::endl;
    std::cout<<"Increment of 1st number is:"<<++a<<std::endl;
    std::cout<<"Decrement of 2nd number is:"<<--b<<std::endl;
    std::cout<<"Left shift of 1st number is:"<<(a<<1)<<std::endl;
    std::cout<<"Right shift of 2nd number is:"<<(b>>1)<<std::endl;
    std::cout<<"Bitwise AND of two numbers is:"<<(a&b)<<std::endl;
    std::cout<<"Bitwise OR of two numbers is:"<<(a|b)<<std::endl;
    std::cout<<"Bitwise XOR of two numbers is:"<<(a^b)<<std::endl;
    std::cout<<"Bitwise NOT of 1st number is:"<<(~a)<<std::endl;
    std::cout<<"Logical AND of two numbers is:"<<(a&&b)<<std::endl;
    std::cout<<"Logical OR of two numbers is:"<<(a||b)<<std::endl;
    std::cout<<"Logical NOT of 1st number is:"<<(a!=0)<<std::endl;
    std::cout<<"Logical NOT of 2nd number is:"<<(b!=0)<<std::endl;
    std::cout<<"Conditional operator of two numbers is:"<<(a>b?a:b)<<std::endl;
    std::cout<<"Comma operator of two numbers is:"<<(a,b)<<std::endl;
    std::cout<<"Size of 1st number is:"<<sizeof(a)<<std::endl;
    std::cout<<"Size of 2nd number is:"<<sizeof(b)<<std::endl;
    std::cout<<"Type of 1st number is:"<<typeid(a).name()<<std::endl;
    std::cout<<"Type of 2nd number is:"<<typeid(b).name()<<std::endl;
    return 0;
}
