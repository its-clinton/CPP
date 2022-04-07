#include <iostream>
using namespace std;

class Myclass {
public:
  Myclass() {
    std::cout << "Hello World!" << '\n';
  }
};
int main()
{
  Myclass obj;
  return 0;
}
