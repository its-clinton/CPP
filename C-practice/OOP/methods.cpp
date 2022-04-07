#include <iostream>
using namespace std;
// function declared externally
class Clinton {
public:
  void myMethod();
};
void Clinton::myMethod() {
  std::cout << "Hello world!" << '\n';
}
int main()
{
  Clinton obj;
  obj.myMethod();
  return 0;
}
