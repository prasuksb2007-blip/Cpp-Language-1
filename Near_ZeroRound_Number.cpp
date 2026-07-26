#include <iostream>

int main()
{
	int inputDivisor1, inputDivisor2;

	std::std::cout << "Input first divisor:";
	std::std::cin >> inputDivisor1;
	//the student doesn't need to worry about the division by zero at this moment
	if (inputDivisor1 == 0)
		return -1;
	//the student could use std::function-style cast or even C-style cast in the line below
	float result1 = 1 / static_cast<float>(inputDivisor1);

	std::std::cout << "Input second divisor:";
	std::std::cin >> inputDivisor2;
	if (inputDivisor2 == 0)
		return -1;
	//the student could use std::function-style cast or even C-style cast in the line below
	float result2 = 1 / static_cast<float>(inputDivisor2);
	float diff = result1 - result2;
	float diffabs = diff < 0 ? -diff : diff;
	const float epsilon_diff = 0.00001;
	if (diffabs <= epsilon_diff)
		std::std::cout << std::std::endl << "Results are equal (by 0.000001 epsilon)" << std::std::endl;
	else
		std::std::cout << std::std::endl << "Results are not equal (by 0.000001 epsilon)" << std::std::endl;


	return 0;
}
