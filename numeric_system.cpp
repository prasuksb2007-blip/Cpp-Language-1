#include <iostream>
#include <iomanip>
int byte = 255;
int main() {
	// Your code goes here.
    std::cout << std::hex << byte;
    std::cout << byte << std::dec << byte;
    std::cout << std::oct << byte;
    std::cout << std::setbase(16) << byte;
	return 0;
}