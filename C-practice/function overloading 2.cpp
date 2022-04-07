#include <iostream>
using namespace std;
// multiple functons can have the same name as long the parameters are different.
int plusFunc(int x, int y) {
  return x + y;
}
double plusFunc(double x, double y) {
  return x + y;
}
int main()
{
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);

  std::cout << "int: " << myNum1 << '\n';
  std::cout << "Double: " << myNum2 << '\n';
  return 0;
}
