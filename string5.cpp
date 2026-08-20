// Functions related program for string practice programs.
#include <iostream>
#include <string>


int main() 
{
//Case1:Appending a (sub)string
    std::string str1 = "Hello";
    std::string str2 = " World";
    str1.append(str2);                      // Appends str2 to str1
    str1.append(str2, 0, 3);                 // Appends substring " Wo"
    str1.append(3, '!');                    // Appends "!!!"
    std::cout << "Result: " << str1 << std::endl << std::endl;

//Case2:Appending a character
    std::string str3 = "C++";
    str3.push_back(' ');                    // Appends single character space
    str3.push_back('1');                    // Appends single character '1'
    str3.push_back('7');
    std::cout << "Result: " << str3 << std::endl << std::endl;

//Case3:Inserting a (sub)string or a character
    std::string quote = "Whyserious?";
    std::string insert_word = "monsoon";
    quote.insert(3, 2, ' ');                 // Inserts 2 spaces at index 3
    quote.insert(4, insert_word, 3, 2);      // Inserts "so" from "monsoon" at index 4
    std::cout << "Result: " << quote << std::endl << std::endl;

//Case4:Assigning a (sub)string or a character
    std::string sky = "Initial Content";
    sky.assign(20, '*');                    // Overwrites content with 20 '*'
    std::cout << "Result: " << sky << std::endl << std::endl;

//Case5:Replacing a (sub)string
    std::string to_do = "I'll think about that in one hour";
    std::string schedule = "today yesterday tomorrow";
    // Replaces 12 characters starting at index 22 with 8 characters from schedule starting at index 16 ("tomorrow")
    to_do.replace(22, 12, schedule, 16, 8);
    std::cout << "Result: " << to_do << std::endl << std::endl;

//Case6:Erasing a (sub)string
    std::string where_are_we = "I've got a feeling we're not in Kansas anymore";
    where_are_we.erase(38, 8).erase(25, 4); // Removes " anymore" then "not "
    std::cout << "Result: " << where_are_we << std::endl << std::endl;

//Case7:Exchanging the contents of two strings
    std::string drink = "A martini";
    std::string needs = "Shaken, not stirred";
    std::cout << "Before swap: " << drink << " | " << needs << std::endl;
    drink.swap(needs);                       // Swaps internal pointers efficiently
    std::cout << "After swap:  " << drink << " | " << needs << std::endl;

    return 0;
}