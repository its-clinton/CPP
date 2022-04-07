#include <iostream>
using namespace std;

class Car {
public:
  string brand;
  string model;
  int year;
};
int main()
{
  Car object1;
  object1.brand = "Ford";
  object1.model = "X5";
  object1.year = 1999;

  Car object2;
  object2.brand = "BMW";
  object2.model = "Mustang";
  object2.year = 1969;

  std::cout << object1.brand << " " << object1.model << " " << object1.year << '\n';
  std::cout << object2.brand << " " << object2.model << " " << object2.year << '\n';
}
