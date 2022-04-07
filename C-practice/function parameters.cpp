#include <iostream>
using namespace std;
void myFunction(string fname){
  std::cout << fname << " Refsnes\n";
}
int main()
{
  myFunction("Liam");
  myFunction("Jemy");
  myFunction("Anja");
  return 0;

}
