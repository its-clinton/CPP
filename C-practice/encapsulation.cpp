#include <iostream>
using namespace std;

class Employee {
private:
  int salary;
public:
  // setter
  void setSalary(int s) {
    salary = s;
  }
  // getter
  int getSalary() {
    return salary;
  }
};
int main() {
  Employee obj;
  obj.setSalary(5000);
  std::cout << obj.getSalary() << '\n';
  return 0;
}
