// Function to find prime number of selected group.
#include <iostream>
#include <cmath>
bool isPrime(int num) 
{
    // 0 and 1 are not prime numbers
    if (num <= 1) return false;
    
    // 2 is the only even prime number
    if (num == 2) return true;
    
    // Exclude all other even numbers
    if (num % 2 == 0) return false;
    
    // Check odd factors up to the square root of n
    int limit = std::sqrt(num);
    for (int i = 3; i <= limit; i += 2) 
    {
        if (num % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it is prime
}

int main(void) 
{
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			std::cout << i << " ";
	std::cout << std::endl;
	return 0;
}