// Introduction to string.
#include <iostream>
#include <string>

int main(void) 
{
  //case1:add
  std::string good = "Jekyll", bad = "Hyde";
  std::cout << good + " & " + bad << std::endl;
  std::cout << bad + " & " + good << std::endl;

  //case2:assignment operator
  std::string the_question = "To be ";
  the_question += "or not to be";
  std::cout << the_question << std::endl;

  //case3:single word
  std::string word_of_types;
  std::cin >> word_of_types;
  std::cout << word_of_types << std::endl;

  //case4:full line
  /*std::string line_of_types;
  getline(std::cin, line_of_types);
  std::cout << line_of_types << std::endl;*/
  return 0;
}