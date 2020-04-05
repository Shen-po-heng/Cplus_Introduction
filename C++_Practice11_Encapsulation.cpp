/*
Program name:C++ Encapsulation
Editor:Shen Po Heng
Date:02.05.2020 
goal:access Specifiers and encapsulation

In C++, there are three access specifiers:
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, You will learn more about Inheritance later.

Encapsulation:
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. 
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
If you want others to read or modify the value of a private member, you can provide public get and set methods.

ref:W3C School
*/
#include <iostream>
using namespace std;

class Gold_store {
  private:
    double value_convert_percentage=0.0537;
  public:
  	double real_value;
    void setValue(int v) {
      real_value = v*(2/value_convert_percentage);
    }
    double getvalue() {
      return real_value;
    }
};

int main() {
  Gold_store Obj;
  Obj.setValue(100);
  cout << Obj.getvalue();
  return 0;
}

