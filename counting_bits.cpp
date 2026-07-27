/*counting set bits in a number*/
#include<iostream>
int main()
{
    unsigned long int num;
    std::cout << "Enter a number: ";
    std::cin>> num;
    int coun = 0;
    while(num)
    {
        coun+=num&1;
        num>>=1;
    }
    std::cout << "Number of set bits: " << coun << std::endl;
    return 0;
}