// Function to calculate the length of a month of a year.
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

int monthLength(int year, int month) 
{
    if (month == 2)
    {
        if (isLeap(year))
            return 29;
        else
            return 28;
        
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}
int main(void) 
{

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			std::cout << monthLength(yr,mo) << " ";
		std::cout << std::endl;
	}
	return 0;
}