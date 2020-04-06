/*
Program name:C++ Exceptions
Editor:Shen Po Heng
Date:02.05.2020 
goal:Exceptions
When an error occurs, C++ will normally stop and generate an error message. 

The "try" statement allows you to define a block of code to be tested for errors while it is being executed.

The "throw" keyword throws an exception when a problem is detected, which lets us create a custom error.

The "catch" statement allows you to define a block of code to be executed, if an error occurs in the try block.

try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}
*/

#include <iostream>
using namespace std;

int main() {
  try {
    int money = 100;
    if (money > 100000000) {
      cout << "Hello, your finance permit to get VIP card.";
    } else {
      throw (money);
    }
  }
  catch (int rej) {
    cout << "Sorry, your application get rejection!\n";
    cout << "Your money is: " << rej;  
  }
  /*
  catch (...) {
    cout << "Sorry, your application get rejection!\n";
  }
  */
  return 0;
}

