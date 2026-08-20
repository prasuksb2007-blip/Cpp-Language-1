#include <iostream>

using namespace std;

namespace hogwarts {
  int troll = 1;
}

namespace Mordor {
  int troll = 2;
}

int main(void) {
  cout << hogwarts::troll << " " << Mordor::troll << endl;
  return 0;
}