// Function to calculate total days between to given dates.
#include <iostream>

struct Date 
{
	int year;
	int month;
	int day;
};

bool isLeap(int year) 
{
    if(year % 4 !=0) return false;
    else if(year % 100 != 0) return true;
    else if(year % 400 != 0) return false;
    else return true;
}

int monthLength(int year, int month) 
{
    if (month == 2)
    {
        if (isLeap(year)) return 29;
        else return 28;
        
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 31;
}

int dayOfYear(Date date)
{
    int day=0;
    for(int mo=1; mo<date.month; mo++)
        day += monthLength(date.year, mo);
    day += date.day;
    return day;
}

int daysBetween(Date d1, Date d2)
{
    int days = 0;
    if (d1.year == d2.year) 
    {
        days = dayOfYear(d2) - dayOfYear(d1);
    } 
    else 
    {
        // Add days from the first date to the end of its year
        days += (isLeap(d1.year) ? 366 : 365) - dayOfYear(d1);
        // Add days for the years in between
        for (int year = d1.year + 1; year < d2.year; ++year) 
        {
            days += isLeap(year) ? 366 : 365;
        }
        // Add days from the beginning of the last year to the second date
        days += dayOfYear(d2);
    }
    return days;
}

int main(void) {

	Date since,to;
	std::cout << "Enter first date (y m d): ";
	std::cin >> since.year >> since.month >> since.day;
	std::cout << "Enter second date (y m d): ";
	std::cin >> to.year >> to.month >> to.day;
	std::cout << daysBetween(since,to) << std::endl;
	return 0;
}