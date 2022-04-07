#include <iostream>
using namespace std;
// internally defined function
class Myclass {
public:
  void myMethod() {
    std::cout << "Hello World." << '\n';
  }
};
int main()
{
  Myclass myObj;
  myObj.myMethod();
  return 0;
}
