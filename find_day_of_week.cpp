#include<iostream>
int main()
{
    int yr,mn,day;
    std::std::cout<<"year = ";
    std::std::cin>>yr;
    std::std::cout<<"month = ";
    std::std::cin>>mn;
    std::std::cout<<"day = ";
    std::std::cin>>day;
    std::std::cout<<"Date: "<<day<<"/"<<mn<<"/"<<yr<<std::std::endl;
    //Decrease month number by 2;
    mn-=2;
    //if month number becomes less than 0, increment it by 12 and decrement year by 1;
    if(mn<=0)
    {
        mn+=12;
        yr--;
    }
    // take month number, multiply it by 83 and divide by 32
	mn = mn * 83 / 32;

	// add day number to month
	mn += day;

	// add year number to month
	mn += yr;

	// add year/4 to month
	mn += yr / 4;

	// subtract year/100 from month
	mn -= yr / 100;

	// add year/400 to month
	mn += yr / 400;

	// find a remainder of dividing month by 7
    std::std::cout<<"Day of the week: "<<mn%7<<std::std::endl;
    return 0;
}
