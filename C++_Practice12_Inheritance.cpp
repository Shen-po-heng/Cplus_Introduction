/*
Program name:C++ Inheritance
Editor:Shen Po Heng
Date:02.05.2020 
goal:Inheritance
1.In C++, it is possible to inherit attributes and methods from one class to another. 
We group the "inheritance concept" into two categories:
	derived class (child) - the class that inherits from another class
	base class (parent) - the class being inherited from

2.Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.

3.Multiple Inheritance
A class can also be derived from more than one base class, using a comma-separated list
ref:W3C School 
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class School {
  public: 
    string name = "Cha-Cha";
    void fame() {
      cout << "We are the best \n" ;
    }
};

// Derived class
class Stu: public School {
  public: 
    string stu_name = "Tom";
};


//ex2 Multilevel Inheritance
// Grand_parent class
class Grand_parent {
  public: 
    void present() {
      cout << "We are rich!!" ;
    }
};
// parent class
class parent: public Grand_parent {
};

// Child class 
class Child: public parent {
};

//ex3 Multiple Inheritance
// Another base class
class myfriend{
  public:	
	void fun(){
		cout<<"my friends likes me!!";
	}
};
class myfriendsfriend {
  public:
    void fun_2() {
      cout << "my friends' friends do not like me!!'" ;
    }
};
// Derived class
class friends: public myfriend, public myfriendsfriend {
};

//ex4 Access Specifiers
// Base class
class company {
  /*private: // Protected access specifier
    int money;*/
  protected: // Protected access specifier
    int money;
};

// Derived class
class boss: public company {
  public:
    int bonus;
    void setmoney(int m) {
      money = m;
    }
    int getmoney() {
      return money;
    }
};
int main() {
  Stu stu_1;
  stu_1.fame();
  cout << stu_1.stu_name + " " + stu_1.name;
  cout<<endl<<endl;
  
  //ex2 Multilevel Inheritance
  Child Chi_finance;
  Chi_finance.present();
  
  cout<<endl<<endl;
  //ex3 Multiple Inheritance
  friends myfriends;
  myfriends.fun();
  myfriends.fun_2();
  
  cout<<endl<<endl;
  //ex4 Access Specifiers
  boss me;
  me.setmoney(50000);
  me.bonus = 15000;
  cout << "My money from company: " << me.getmoney() << "\n";
  cout << "Bonus: " << me.bonus << "\n";
  return 0;
}
