/*
Program name:Pointer
Editor:Shen Po Heng
Date:02.04.2020 
goal:the pointer of C++

Using the "&" operator get the memory address of a variable.
A pointer is a variable that stores the memory address as its value.
With the * operator, you can get the value of the address stored in the pointer
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
  string obj = "computer";  // A string variable
  string* ptr = &obj;  // A pointer variable that stores the address of obj

  // Output the value of obj
  cout << "obj:"<<obj << "\n";

  // Output the memory address of obj
  cout << "&obj:"<<&obj << "\n";

  // Output the memory address of obj with the pointer
  cout << "ptr:"<<ptr << "\n";  
	  
  // Reference: Output the memory address of the pointer 
  cout << "&ptr"<<&ptr << "\n";
	
  // Dereference: Output the value of obj with the pointer (computer)
  cout << "*ptr"<<*ptr << "\n";
  
  //Example_for_modify
	// Change the value of the pointer
	*ptr = "notebook";	
	// Output the new value of the pointer (notebook)
	cout << *ptr << "\n";	
	// Output the new value of the obj variable (notebook)
	cout << obj << "\n";
  return 0;
}
