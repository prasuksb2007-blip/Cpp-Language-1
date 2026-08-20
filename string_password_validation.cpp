#include <string>
#include <iostream>
#include <cctype>

int main()
{
    std::string password;
    std::getline(std::cin, password);

    bool is_long_enough = false;
    bool has_upper      = false;
    bool has_digit      = false;
    bool has_special    = false;
    bool chars_valid    = false;

    // manipulate the password here
    // and print validation result
    size_t len_pass = password.size();
    is_long_enough  = len_pass > 8;
    for (int i = 0; !chars_valid && (i < len_pass); ++i)
    {
      if (::isupper(password[i])) { has_upper   = true; }
      if (::isdigit(password[i])) { has_digit   = true; }
      if (::ispunct(password[i])) { has_special = true; }
      chars_valid = has_upper && has_digit && has_special;
    }


    if (!is_long_enough)
    {
      std::cout << "The password must be 8 characters long" << std::endl;
    }
    if (!has_upper)
    {
      std::cout << "The password must have at least one upper case letter" << std::endl;
    }
    if (!has_digit)
    {
      std::cout << "The password must have at least one digit" << std::endl;
    }
    if (!has_special)
    {
      std::cout << "The password must have at least one special character" << std::endl;
    }

    if (chars_valid && is_long_enough)
    {
      std::cout << "The password is valid" << std::endl;
    }

    return 0;
}