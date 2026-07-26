#include <iostream>



int main(void) {

    int n;

    std::cout << "n = ";
    std::cin >> n;

    // Handle base cases (0! and 1!)
    if(n == 0 || n == 1) {
        std::cout << "1" << std::endl;
    } else {
        // Initialize result to 1
        long long result = 1;

        // Multiply all numbers from 2 to n
        for(int i = 2; i <= n; i++) {
            result *= i;
        }

        std::cout << result << std::endl;
    }
    return 0;
}
