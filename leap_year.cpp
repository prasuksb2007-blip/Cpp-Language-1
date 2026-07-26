#include <iostream>


int main() {
    int year;

    // Prompt user for input
    std::cout << "Enter a year: ";
    std::cin >> year;

    // A year is a leap year if it is divisible by 4 AND not divisible by 100,
    // OR if it is directly divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
