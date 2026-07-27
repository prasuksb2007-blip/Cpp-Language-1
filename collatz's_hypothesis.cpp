/* collatz's hypothesis */
#include <iostream>

int main(void) {
	int c0, i = 0;
	
	std::cout << "c0 = ";
	std::cin >> c0;
	while(c0 != 1) {

		// increment steps counter
		i++;

		if(c0 % 2 == 0)
			// if it's even, evaluate a new c0 as c0
			c0 = c0 / 2;
		else
			// otherwise, if it's odd, evaluate a new c0 as 3 ⋅ c0 + 1
			c0 = 3 * c0 + 1;
		std::cout << c0 << std::endl;
	}
	std::cout << "steps = " << i << std::endl;
	return 0;
}