#include <iostream>
#include <iomanip>
int byte = 255;
int main() {
	// Your code goes here.
    std::std::cout << std::hex << byte;
    std::std::cout << byte << std::dec << byte;
    std::std::cout << std::oct << byte;
    std::std::cout << std::setbase(16) << byte;
	return 0;
}
