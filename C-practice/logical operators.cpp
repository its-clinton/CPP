#include<iostream>
using namespace std;
int main()
{
  int a = 5;
  int b = 6;
  int c = 10;
  std::cout << (a > b && a < 10 ) << '\n';
  std::cout << (a < b && a < 10) << '\n';
  std::cout <<(a < c || a > b) << '\n'; //returns true if one of the conditions is true
}
