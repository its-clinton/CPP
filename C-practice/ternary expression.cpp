#include <iostream>
#include <string>
using namespace std;
int main()
{
  int time = 20;
  string result  = (time > 18) ? "Good Morning?":"Good evening.";
  std::cout << result << '\n';
  return 0;
}
