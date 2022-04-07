#include <iostream>
using namespace std;
int main()
{
  string food = "Pizza";
  string &meal = food;

  std::cout << food << '\n';
  std::cout << meal << '\n';
  return 0;
}
