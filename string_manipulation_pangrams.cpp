#include <iostream>
#include <string>
#include <map>
#include <cctype>

int main() 
{
    std::string input;
    getline(std::cin, input);

    std::map<char, int> charCount;
    int totalCount = 0;

    for (char c : input) {
        if (isalpha(c)) {
            charCount[tolower(c)]++;
            totalCount++;
        }
    }

    if (charCount.size() == 26) {
        std::cout << "Pangram" << std::endl;
    } else {
        std::cout << "Not pangram" << std::endl;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        std::cout << c << "-" << charCount[c] << std::endl;
    }

    return 0;
}