#include <iostream>



int main(void) {

	int n;

	std::cout << "n = ";
	std::cin >> n;

	// two first elements are equal to zero
	if(n == 1 || n == 2)
		std::cout << 1 << std::endl;
	else {
		// initially: a is first and b is second element
		long a = 1, b = 1, c;
		for(int i = 2; i < n; i++) {

			// c - new next element = sum of two previous elements
			c = a + b;

			// a becomes new 'preprevious' element (old a is lost)
			a = b;

			// b becomes new previous element
			b = c;
		}
		std::cout << c << std::endl;
	}
	return 0;
}
