#include <iostream>
using namespace std;
 int main() {
  try {
  int age  = 15;
  if (age >= 18) {
    std::cout << "Access granted - you are old enough" << '\n';
  }
  else {
    throw (age);
  }
}
  catch (int myNum) {
    std::cout << "Access denied - you must be at least 18 years old." << '\n';
    std::cout << "Age is: "<< myNum << '\n';
 }
}
