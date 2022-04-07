#include <iostream>
using namespace std;
class Myclass {
public:
  int myNum;
  string myString;
};
int main()
{
  Myclass myObj;
  myObj.myNum = 15;
  myObj.myString = "some text";

  std::cout << myObj.myNum << '\n';
  std::cout << myObj.myString << '\n';
  return 0;


}
