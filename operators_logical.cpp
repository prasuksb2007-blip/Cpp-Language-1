#include <iostream>

using namespace std;

int main(void) {

	bool answer; 
	int value;
	
	cout << "Enter a value: ";
	cin >> value;
	
	answer = 

	// is greater than or equal to zero and less than ten
	(value >= 0 && value < 10) 

	// or
	|| 

	// its value multiplied by 2 is less than twenty and 
	// its value reduced by two is greater than minus two
	(2 * value < 20 && value - 2 > -2) 

	// or
	|| 

	// its value reduced by one is greater than one and 
	// its value divided by 2 is less than ten
	(value - 1 >= 1 && value / 2 < 10) 

	// or
	|| 

	// it is equal to 111
	value == 111; 
	
	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
	return 0;
}