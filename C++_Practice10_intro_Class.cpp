/*
Program name:C++ constructor
Editor:Shen Po Heng
Date:02.05.2020 
goal:class and constructor
Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
*/
#include <iostream>
using namespace std;

class Stuent {        // The class
  public:          // Access specifier
    string name;  // Attribute
    string score;  // Attribute
    string year;      // Attribute
    Stuent(string x, string y, string z) {  // Constructor with parameters
      name = x;
      score = y;
      year = z;
    }
};
/*
class Stuent {        // The class
  public:          // Access specifier
    string name;  // Attribute
    string score;  // Attribute
    string year;      // Attribute
    Stuent(string x, string y, string z); // Constructor declaration
};

// Constructor definition outside the class
Stuent::Stuent(string x, string y, string z) {
  name = x;
  score = y;
  year = z;
}

*/
int main() {
  // Create Stuent objects and call the constructor with different values
  Stuent stu_1("Tom", "99", "Third");
  Stuent stu_2("Mark", "59", "Second");

  // Print values
  cout << stu_1.name << " " << stu_1.score << " " << stu_1.year << "\n";
  cout << stu_2.name << " " << stu_2.score << " " << stu_2.year << "\n";
  return 0;
}

