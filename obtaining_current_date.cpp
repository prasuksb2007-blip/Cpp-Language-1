// Program to get current date.
#include <iostream>
#include <ctime>

struct Date 
{
	int year;
	int month;
	int day;
};


Date today(void)
{

	// get current time as seconds since midnight, 1 Jan, 1970
	time_t	t      = time(0);

	// convert it into more friendly format and store in tl
	tm      tl     = *localtime(&t);

	// construct new date structure 
	Date date = { tl.tm_year+1900, tl.tm_mon+1, tl.tm_mday };

	// return it
	return date;
}

int main(void) 
{

	Date t = today();
	std::cout << t.year << "-" << t.month << "-" << t.day << std::endl;
	return 0;
}