// Advanced string-related practice programs 1.
#include <iostream>
#include <string>

int main(void) 
{
//Case1: Substring
  std::string str1, str2;
  str1 = "ABCDEF";
  str2 = str1.substr(1, 1) + str1.substr(4) + str1.substr();
  /*str1.substr(1, 1)-->B
  str1.substr(4)--> EF
  str1.substr()--> ABCDEF*/
  std::cout << str2 << std::endl;
// Case2: Length of string
  std::string str = "12345";
  int pos = 1;
  std::cout << str.substr(pos).substr(pos).substr(pos).size() << std::endl;
  /*str.substr(pos)-->2345.substr(pos)-->345.substr(pos)-->45.size()-->2*/
// Case3: Detailed string comparision
  std::string S = "ABC";
  std::cout << S.compare(1, 1, "BC") + S.compare(2, 1, S, 2, 2) << std::endl;
  /*S.compare(1, 1, "BC")--> "B".compare("BC")-->-1 only C left then counting backward is -1
  S.compare(2, 1, S, 2, 2)--> "C".compare("C")--> 0*/
// Case4: Finding Stringinside string
  std::string greeting = "My name is Bond, James Bond.";
  std::string we_need_him = "James";
  if (greeting.find(we_need_him) != std::string::npos) //npos means not found.
    std::cout << "OMG! He's here!" << std::endl;
  else
    std::cout << "It's not him." << std::endl;
  int comma = greeting.find(',');
  if (comma != std::string::npos)
    std::cout << "Interesting. He used a comma." << std::endl;
  return 0;
}