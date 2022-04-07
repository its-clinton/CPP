#include <iostream>
using namespace std;

int plusFunctionInt(int x, int y) {
  return x + y;
}
double plusFunctionDouble(double x, double y) {
  return x + y;
}
int main()
{
  int myNum1 = plusFunctionInt(8, 5);
  double myNum2 = plusFunctionDouble(4.3, 6.26);

  std::cout << "int: " << myNum1 << '\n';
  std::cout << "Double: " << myNum2 << '\n';
  return 0;
}
