// Advanced string-related practice programs.
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
  return 0;
}