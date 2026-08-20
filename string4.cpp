// Advanced string-related practice programs 2.
#include <iostream>
#include <string>

//Case1: Find length, capacity and max size.
void print_info( std::string & s) 
{
    std::cout << "length = " << s.length() <<  std::endl;
    std::cout << "capacity = " << s.capacity() <<  std::endl;
    //. Capacity will be at least 7 (often 15 due to Small String Optimization).
    std::cout << "max size = " << s.max_size() <<  std::endl;
    std::cout << "---------" <<  std::endl;
}

int main(void) 
{
   std::string the_string = "content";
  print_info(the_string);
  for (int i = 0; i < 10; i++)
    the_string += the_string;
  print_info(the_string);
  return 0;
}

//Case2: Controling size of string.
/*void print_info(std::string & s) 
{
  std::cout << "content =\"" << s << "\" ";
  std::cout << "capacity = " << s.capacity() << std::endl;
  std::cout << "---------" << std::endl;
}
In this line int main will come.
{
  std::string the_string = "content";
  print_info(the_string);
  the_string.reserve(100);
  print_info(the_string);
  the_string.reserve(0);
  print_info(the_string);
  return 0;
}*/

//Case3: Controling content of string.
/*void print_info(std::string & s) 
{
  std::cout << "content =\"" << s << "\" ";
  std::cout << "capacity = " << s.capacity() << std::endl;
  std::cout << "is empty? " << (s.empty() ? "yes" : "no") << std::endl;
  std::cout << "---------" << std::endl;
}
In this line int main will come.
{
  std::string the_string = "content";
  print_info(the_string);
  the_string.resize(50, '?');
  print_info(the_string);
  the_string.resize(4);
  print_info(the_string);
  the_string.clear();
  print_info(the_string);

  return 0;
}*/
/*
Functions:

s.clear(): Deletes all characters, making the string empty.

s.resize(n) / s.resize(n, char): Truncates the string if n is smaller than current length, or expands it by appending the specified character (defaults to null character '\0').

s.empty(): Returns true if the string contains no characters (length == 0).
*/