/*
Program name:C++ Polymorphism
Editor:Shen Po Heng
Date:02.05.2020 
goal:Polymorphism
Polymorphism means "many forms", and it occurs 
when we have many classes that are related to each other by inheritance.
Me:it mean derived class could redefine the method of base class
it can help us  improve our program more briefly
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class protein {
  public:
    void benefit() {
      cout << "Help us to build muscle!! \n" ;
    }
};

// Derived class
class Animal : public protein {
  public:
    void Animal_protein() {
      cout << "Animal_protein possess more protein, but include many fats inside \n" ;
    }
};

// Derived class
class Plant : public protein {
  public:
    void Plant_protein() {
      cout << "Plant_protein possess less protein, but include many fiber and not much fat \n" ;
    }
};

int main() {
  protein essence;
  Animal Ani_pro;
  Plant Pla_pro;

  essence.benefit();
  Ani_pro.Animal_protein();
  Pla_pro.Plant_protein();
  return 0;
}

