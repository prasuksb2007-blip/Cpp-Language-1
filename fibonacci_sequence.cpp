#include <iostream>

using namespace std;

int main(void) {

	int n;

	cout << "n = ";
	cin >> n;

	// two first elements are equal to zero
	if(n == 1 || n == 2)
		cout << 1 << endl;
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
		cout << c << endl;
	}
	return 0;
}