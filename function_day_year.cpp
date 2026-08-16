// Function to calculate the day of the year from a given date.
#include <iostream>

struct Date 
{
	int year;
	int month;
	int day;
};

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

int dayOfYear(Date date)
{
    int day=0;
    for(int mo=1; mo<date.month; mo++)
        day += monthLength(date.year, mo);
    day += date.day;
    return day;
}

int main(void) 
{
	Date d;
	std::cout << "Enter year, month, day: ";
	std::cin >> d.year >> d.month >> d.day;
	std::cout << dayOfYear(d) << std::endl;
	return 0;
}