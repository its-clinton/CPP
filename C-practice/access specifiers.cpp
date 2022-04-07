#include <iostream>
using namespace std;

class Employee {
  // protected access specifier
protected:
  int salary;
};

// derived class
class Programmer: public Employee {
public:
  int bonus;
  void setSalary(int s) {
    salary = s;
  }
  int getSalary() {
    return salary;
  }
};

int main()
{
  Programmer obj;
  obj.setSalary(50000);
  obj.bonus = 15000;
  std::cout << "Salary: "<< obj.getSalary() << '\n';
  std::cout << "Bonus: "<< obj.bonus << '\n';
  return 0;
}
