/*
Program name:POverloading
Editor:Shen Po Heng
Date:02.05.2020 
goal:overloading
In c++, Overloading permit designer to use same name to create different functions.
That can help you solve different data type problems
*/
#include <iostream>
using namespace std;

int area(int x, int y){ return x*y;} 
float area(float x, float y){ return x*y;}          
double area(double x, double y){ return x*y;}         

int main(){
	cout<<area(3,4)<<endl;
	cout<<area(3.5,4.5)<<endl;
	cout<<area(3.5,4.5)<<endl;
	
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                              
