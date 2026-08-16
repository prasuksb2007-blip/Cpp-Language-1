// Function to determine if a year is a leap year or not.
#include <iostream>

bool isLeap(int year) 
{
    if(year % 4 !=0)
        return false;
    else if(year % 100 != 0)
        return true;
    else if(year % 400 != 0)
        return false;
    else
        return true;
}
int main(void) 
{

	for(int yr = 1995; yr < 2017; yr++) 
		std::cout << yr << " -> " << isLeap(yr) << std::endl;
	return 0;
}