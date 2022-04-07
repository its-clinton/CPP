#include <iostream>
using namespace std;
// the equal sign is used here.
void myfunction(string country = "Kenya") {
  std::cout << country << '\n';
}

int main()
{
  myfunction("Sweden");
  myfunction("Tanzania");
  myfunction();
  myfunction("Uganda");
  return 0;

}
