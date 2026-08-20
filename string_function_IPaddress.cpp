#include <iostream>
#include <string>
#include <sstream>

std::string checkIPAddress(std::string address)
{
	std::stringstream splited(address);
	std::string s;
	int partsCount = 0;
	while (std::getline(splited, s, '.'))
	{
		if (3 < s.length() || s.length() < 1)
			return "Too many characters in part";
		if (partsCount > 4)
			return "Incorrect parts count";
		for (int i = 0; i < s.length(); i++)
		{
			if (!isdigit(s[i]))
				return "Only digits and dots allowed";
		}
		int partValue = atoi(s.c_str());
		if (partValue > 255)
			return "Too big value of part";
		partsCount++;
	}
	if (partsCount != 4)
		return "Too many parts";
	return "Correct IP";//Student can store the result in a variable, too
}

int main()
{
	std::cout << checkIPAddress("1.2.3.4") << std::endl;
	std::cout << checkIPAddress("255.255.255.255") << std::endl;
	std::cout << checkIPAddress("355.255.255.255") << std::endl;
	std::cout << checkIPAddress("1000.255.255.255") << std::endl;
	std::cout << checkIPAddress("ASD.255.255.255") << std::endl;
	return 0;
}