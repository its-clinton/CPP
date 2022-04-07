#include <iostream>
using namespace std;
 double division(int x, int y){
 if (y == 0) {
   throw "Division by Zero condition!";

 }
 else if(x == 0) {
   throw "Division by zero condition!";
 }
 return (x/y);
}
int main()
{
  int x = 50;
  int y = 0;
  double z = 0;

  try {
    z = division(x,y);
    std::cout << z << '\n';
  }
  catch (const char* msg) {
    std::cerr << "Error no can not be divided by zero!" << '\n';
  }
  return 0;
}
