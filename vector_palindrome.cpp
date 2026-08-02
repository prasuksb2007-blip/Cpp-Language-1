#include <iostream>

int main(void) {

	int vector[] = {1, 7, 3, 8, 3, 7, 1};
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);

	// we need to check the first half of all elements only
	// if there is odd number of elements in the vector, 
	// the middle element isn't taken into consideration (why?)
	for(int i = 0; i < n / 2; i++)

		// compare i-th element with its symmetrical counterpart
		if(vector[i] != vector[n - i - 1]) {
		
			// diagnose is known at the moment - we can leave the loop
			ispalindrome = false;
			break;
		}

	if(ispalindrome)
		std::cout << "It's a palindrome";
	else
		std::cout << "It isn't a palindrome";
	std::cout << std::endl;
	return 0;
}