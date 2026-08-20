#include <string>
#include <iostream>
#include <algorithm>

void bolden(std::string &text, size_t start, size_t end)
{
  std::string boldened = text.substr(start + 1, end - start - 1);
  std::transform(boldened.begin(), boldened.end(), boldened.begin(), ::toupper);

  text.replace(start, end - start + 1, boldened);
}

void emphasise(std::string &text, size_t start, size_t end)
{
  std::string emphasised = text.substr(start + 1, end - start - 1);
  std::string::iterator next = emphasised.begin();
  size_t chars_after_insert = 0;

  while (next + 1 != emphasised.end())
  {
    emphasised.insert(next + 1, ' ' );
    chars_after_insert += 2;
    next = emphasised.begin() + chars_after_insert;
  }

  text.replace(start, end - start + 1, " " + emphasised + " ");
}

bool find_pair(std::string const &text, size_t &start, size_t &end, char &found_char)
{
  start = std::string::npos;
  end = std::string::npos;

  size_t start_asterix_pos = text.find_first_of('*');
  size_t start_underscore_pos = text.find_first_of('_');

  if (start_asterix_pos != std::string::npos)
  {
    size_t end_asterix_pos =  text.find_first_of('*', start_asterix_pos + 1);
    if (end_asterix_pos != std::string::npos && start_underscore_pos > end_asterix_pos)
    {
      start = start_asterix_pos;
      end   = end_asterix_pos;
      found_char = '*';
      return true;
    }
  }
  if (start_underscore_pos != std::string::npos)
  {
    size_t end_underscore_pos =  text.find_first_of('_', start_underscore_pos + 1);
    if (end_underscore_pos != std::string::npos && start_asterix_pos > end_underscore_pos)
    {
      start = start_underscore_pos;
      end   = end_underscore_pos;
      found_char = '_';
      return true;
    }
  }

  return false;
}

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    size_t found = sentence.find_first_of("_*");
    while (found != std::string::npos)
    {
      size_t start = 0, end = 0;
      char found_char = 0;
      if (find_pair(sentence, start, end, found_char))
      {
        if (found_char == '*')
        {
          bolden(sentence, start, end);
        }
        if (found_char == '_')
        {
          emphasise(sentence, start, end);
        }
      }
      else
      {
        sentence.erase(found, 1);
      }
      found = sentence.find_first_of("_*", found);
    }

    std::cout << sentence << "\n";

    return 0;
}