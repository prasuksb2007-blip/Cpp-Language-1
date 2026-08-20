#include <string>
#include <iostream>

int main()
{
    std::string from;
    std::getline(std::cin, from);

    std::string to;
    std::getline(std::cin, to);

    std::string sentence;
    std::getline(std::cin, sentence);

    // change all occurances of 'from' into 'to' in the sentence
    size_t found = sentence.find(from);
    size_t fromLen = from.length();
    size_t toLen = to.length();
    while (found != std::string::npos)
    {
      sentence.replace(found, fromLen, to);
      found = sentence.find(from, found + toLen + 1);
    }

    std::cout << sentence << "\n";
    return 0;
}