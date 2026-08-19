// Introduction to string.
#include <iostream>
#include <string>

int main(void) 
{

  //Case1:Comparing String
  std::string secret = "abracadabra";
  std::string password;
  std::cout << "Enter password:" << std::endl;
  getline(std::cin, password);
  if (secret == password)
    std::cout << "Access granted" << std::endl;
  else
    std::cout << "Sorry access not granted";
  return 0;
  //Case2: comparing string 2
  /*std::string str1, str2;
  
  std::cout << "Enter the first line of text: ";
  getline(std::cin, str1);

  std::cout << "Enter the second line of text: ";
  getline(std::cin, str2);

  std::cout << "You've entered:" << std::endl;

  if (str1 == str2)
    std::cout << "\"" << str1 << "\" is equal to \"" << str2 << "\"" << std::endl;
  else if (str1 > str2)
    std::cout << "\"" << str1 << "\" is greater than \"" << str2 << "\"" << std::endl;
  else
    std::cout << "\"" << str2 << "\" is greater than \"" << str1 << "\"" << std::endl;*/

  return 0;
}