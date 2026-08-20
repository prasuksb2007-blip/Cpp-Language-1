#include <string>
#include <iostream>

void replace_all(std::string &text, std::string const &from, std::string const &to)
{
  size_t fromLen = from.length();
  size_t toLen = to.length();

  size_t found = text.find(from);
  while (found != std::string::npos)
  {
    text.replace(found, fromLen, to);
    found = text.find(from, found + toLen + 1);
  }
}

int main()
{
  std::string values;
  std::getline(std::cin, values);

  std::string sentence;
  std::getline(std::cin, sentence);

  size_t comma_pos = values.find(',');
  while (comma_pos != std::string::npos)
  {
    size_t equals_pos = values.find('=');
    if (equals_pos < comma_pos && equals_pos != std::string::npos)
    {
      replace_all(sentence,
          "["+values.substr(0, equals_pos)+"]",
          values.substr(equals_pos+1, comma_pos - equals_pos - 1));
    }
    values.erase(0, comma_pos + 1);
    comma_pos = values.find(',');
  }
  size_t equals_pos = values.find('=');
  size_t len_values = values.length();
  if (equals_pos < len_values && equals_pos != std::string::npos)
  {
    replace_all(sentence,
        "["+values.substr(0, equals_pos)+"]",
        values.substr(equals_pos+1, len_values - equals_pos));
  }

  std::cout << sentence << "\n";
}