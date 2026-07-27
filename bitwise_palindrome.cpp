/*checking if a number is a palindrome using bitwise operations*/
#include<iostream>
int main()
{
    unsigned short int num, rev = 0, temp;
    std::cout << "Enter a number: ";
    std::cin >> num;
    temp = num;
    const int bits = sizeof(num) * 8;
    for (int i = 0; i < bits; ++i)
    {
        rev = (rev << 1) | (temp & 1);
        temp >>= 1;
    }
    if (num == rev)
        std::cout << "The number is a palindrome." << std::endl;
    else
        std::cout << "The number is not a palindrome." << std::endl;
    return 0;
}