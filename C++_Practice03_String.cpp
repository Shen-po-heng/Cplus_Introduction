/*
Program name:String
Editor:Shen Po Heng
Date:02.04.2020 
goal:the String of C++

The + operator can be used between strings to add them together to make a new string. 
This is called concatenation.
A string in C++ is an object.
you can also concatenate strings with the append() function
It is up to you whether you want to use + or append(). 

The using namespace std line can be omitted and replaced with the std keyword
, followed by the :: operator for string (and cout) objects

Statement Reference:W3C school
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string LN,FN,name,name_2;
	cout<<"Last name:";
	cin>>LN;
	cout<<"First name:";
	cin>>FN;
	name = LN+" "+FN;
	name_2=LN.append(" "+FN);
	cout<<"Name: "<<name<<endl;
	cout<<"Name_2: "<<name_2<<endl;
	/*
	You might see some C++ programs that use the size() function to get the length of a string. 
	This is just an alias of length(). 
	It is completely up to you if you want to use length() or size():
	*/
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << txt<<endl;
	cout << "The length of the txt string is: " << txt.size()<<endl;
	for(int i=0;i<26;i++)
		cout<<"txt["<<i<<"]="<<txt[i]<<"\t";
	cout<<endl;
	for(int i=0;i<13;i++)
		txt[i*2]='#';//you should add '' instead of "" 
	cout<< txt;
	//C++ Reference
	cout<<endl;
	string food = "Pizza";
	string &meal = food;

	cout << food << "\n";  // Outputs Pizza
	cout << &food<<"\n"; // Outputs the memory address of food;
	cout << meal << "\n";  // Outputs Pizza
	return 0;
}
