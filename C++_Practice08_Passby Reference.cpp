/*
Program name:Pass by Reference
Editor:Shen Po Heng
Date:02.05.2020 
goal:pass by reference
The two following method about passing by reference.
Normally, when we pass data to the function directly, the function has other variables to store the passing data.
And, the variables only belong to called function. You can return result value back to origianl function.
You also have another method "pass by reference". The called function only stroed the address of the variable(or, you call them parameter.)
Thus, you can change the value of the original variables.
*/
#include <iostream>
using namespace std;
//method_01
void swap(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
//method_02
void swap_2(int* x, int* y){
	int z=*x;
	*x=*y;
	*y=z;
}
int main() {
  int Num = 10;
  int Num_2 = 20;

  cout << "Before swap: " << "\n";
  cout << Num << Num_2 << "\n";

  swap(Num, Num_2);

  cout << "After swap: " << "\n";
  cout << Num << Num_2 << "\n";

  swap_2(&Num, &Num_2);

  cout << "After swap_2: " << "\n";
  cout << Num << Num_2 << "\n";
  return 0;
}
