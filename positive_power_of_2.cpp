#include <iostream>



int main(void) {
	int n;

	// 2 to the power of 0 is 1
	unsigned long pow = 1;

	std::cout << "n? ";
	std::cin >> n;

	// repeat it n times
	for(int i = 0; i < n; i++) 

		// evaluate next power of 2
		pow *= 2;

	std::cout << pow << std::endl;
	return 0;
}
