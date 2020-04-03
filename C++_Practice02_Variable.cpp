/*
Program name:Variable
Editor:Shen Po Heng
Date:02.04.2020 
goal:the introduction of C++

int - stores integers (whole numbers), without decimals
double - stores floating point numbers, with decimals
char - stores single characters
string - stores text
bool - stores values with two states: true or false

*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	int Num=15;
	const int num=10;
	double Num_2=2.1;
	float Num_3=1.6;
	char c='A';
	string text="Hello World";
	bool val= true;
	bool val_2= false;
	
	int A,B,C;
	cout<<"input A,B=";
	cin>>A>>B;
	C=A+B;
	cout<<C<<endl;
	cout<< "int "<<Num <<endl;
	//num=6;//if you add this, it can not be compiled because it does not obey the rule of const
	cout<< "const int "<<num<<endl;
	cout<< "double "<<Num_2 <<endl;
	cout<< "float "<<Num_3 <<endl;
	cout<< "char "<<c <<endl;
	cout<< "string "<<text <<endl;
	cout<< "bool "<<val<<" "<<val_2 <<endl;
	
	int x = 5;
	int y = 3;
	cout << (x > y); // returns 1 (true) because 5 is greater than 3
	return 0; 
}
