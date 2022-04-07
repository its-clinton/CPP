#include <iostream>
using namespace std;

class MyClass {
public:
  void myFunction() {
    std::cout << "Some content in parent class." << '\n';
  }
};
class MyOtherClass {
public:
  void myOtherFunction() {
    std::cout << "Some content in another class." << '\n';
  }
};
class MyChildClass: public MyClass, public MyOtherClass {

};
int main()
{
  MyChildClass obj;
  obj.myFunction();
  obj.myOtherFunction();
  return 0;
}
