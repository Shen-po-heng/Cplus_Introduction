/*
Program name:function
Editor:Shen Po Heng
Date:02.05.2020 
goal:the function of C++
A function is a block of code which only runs when it is called.
You can pass parameters into a function.
*/
#include <iostream>
#include<string>
using namespace std;

void Fun() {
  cout << "This Fun() is executed once\n";
}
void Fun_2(string text="Hello World!!"){
	cout<<text<<endl;
}
int Fun_3(int x=5,int y=5) {
  return x+y;
}

int main() {
  Fun();
  Fun_2();
  Fun_2("Fun_2 is executed once");
  cout<<Fun_3()<<endl;
  cout<<Fun_3(1,1)<<endl;
  return 0;
}


