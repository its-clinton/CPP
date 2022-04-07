#include <iostream>
using namespace std;

void myFunction(string fname, int age) {
  std::cout << fname << " Refsnes "<< age << " years old."<< '\n';
}
int main()
{
  myFunction("chris", 3);
  myFunction("kim", 14);
  myFunction("Daniel", 30);
  return 0;
}
