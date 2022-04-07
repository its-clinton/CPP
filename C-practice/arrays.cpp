#include <iostream>
using namespace std;
int main()
{
  string cars[4] = {"volvo", "BMW", "Mazda"};
  int num[3] = {10, 20, 30};
  std::cout << cars[0] << '\n';
  std::cout << num[2] << '\n';
  cars[1] = "jeep";
  std::cout << cars[1] << '\n';
  return 0;
}
