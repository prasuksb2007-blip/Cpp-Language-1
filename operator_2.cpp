#include<iostream>
int main()
{
    int a,b;
    std::std::cout<<"Enter 1st numbers:";
    std::std::cin>>a;
    std::std::cout<<"Enter 2nd numbers:";
    std::std::cin>>b;
    std::std::cout<<"Sum of two numbers is:"<<a+b<<std::std::endl;
    std::std::cout<<"Subtraction of two numbers is:"<<a-b<<std::std::endl;
    std::std::cout<<"Multiplication of two numbers is:"<<a*b<<std::std::endl;
    std::std::cout<<"Division of two numbers is:"<<a/b<<std::std::endl;
    std::std::cout<<"Modulus of two numbers is:"<<a%b<<std::std::endl;
    std::std::cout<<"Increment of 1st number is:"<<++a<<std::std::endl;
    std::std::cout<<"Decrement of 2nd number is:"<<--b<<std::std::endl;
    std::std::cout<<"Left shift of 1st number is:"<<(a<<1)<<std::std::endl;
    std::std::cout<<"Right shift of 2nd number is:"<<(b>>1)<<std::std::endl;
    std::std::cout<<"Bitwise AND of two numbers is:"<<(a&b)<<std::std::endl;
    std::std::cout<<"Bitwise OR of two numbers is:"<<(a|b)<<std::std::endl;
    std::std::cout<<"Bitwise XOR of two numbers is:"<<(a^b)<<std::std::endl;
    std::std::cout<<"Bitwise NOT of 1st number is:"<<(~a)<<std::std::endl;
    std::std::cout<<"Logical AND of two numbers is:"<<(a&&b)<<std::std::endl;
    std::std::cout<<"Logical OR of two numbers is:"<<(a||b)<<std::std::endl;
    std::std::cout<<"Logical NOT of 1st number is:"<<(a!=0)<<std::std::endl;
    std::std::cout<<"Logical NOT of 2nd number is:"<<(b!=0)<<std::std::endl;
    std::std::cout<<"Conditional operator of two numbers is:"<<(a>b?a:b)<<std::std::endl;
    std::std::cout<<"Comma operator of two numbers is:"<<(a,b)<<std::std::endl;
    std::std::cout<<"Size of 1st number is:"<<sizeof(a)<<std::std::endl;
    std::std::cout<<"Size of 2nd number is:"<<sizeof(b)<<std::std::endl;
    std::std::cout<<"Type of 1st number is:"<<typeid(a).name()<<std::std::endl;
    std::std::cout<<"Type of 2nd number is:"<<typeid(b).name()<<std::std::endl;
    return 0;
}
