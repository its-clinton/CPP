#include <iostream>
using namespace std;
int main()
{
  string name;
  std::cout << "Enter your name please: " << '\n';
  std::cin >> name;
  while (name == "") {
    if (name != "clinton") {
      continue;
    }
    std::cout << "Name Verified." << '\n';
  }

}
