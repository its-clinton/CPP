#include <iostream>
using namespace std;

class AbstractEmployee {
  virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
public:
  string Name;
  string Company;
  int Age;

  void introduce() {
    std::cout << "Name - "<< Name << '\n';
    std::cout << "Company - " << Company << '\n';
    std::cout << "Age - "<< Age << '\n';

  }
  Employee(string name,string company, int age) {
    Name  = name;
    Company = company;
    Age = age;
  }
  void AskForPromotion() {
     if (Age>30)
     std::cout << Name << " got promoted!" << '\n';
     else
     std::cout << Name<< " sorry not promoted!" << '\n';
  }
};
int main()
{
  Employee employee1 = Employee("clinton", "YT-codeBeauty", 25);

  Employee employee2 = Employee("Christopher", "YT-codeBeauty", 35);
  employee1.introduce();
  employee2.introduce();
  employee1.AskForPromotion();
  employee2.AskForPromotion();
  return 0;

}
