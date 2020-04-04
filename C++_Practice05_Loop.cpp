/*
Program name:Loop
Editor:Shen Po Heng
Date:02.04.2020 
goal:the loop of C++
1.while-loop: keep executing a block of code as long as a specified condition is true
2.do/while-loop: It is similar the while-loop. This loop will execute the code block at least once before checking,
if the condition is true, then it will repeat the loop as long as the condition is true. 
3.for-loop: It can repeat loop times you decided.
*/
#include<iostream>
using namespace std;
int main(){
	//while
	int i = 0;
		while (i < 5) {
		  cout << "#";
		  i++;
		}
	cout<<endl;	
	//do-while
		do {
		  cout << "#";
		  i++;
		}
		while (i < 5);
	cout<<endl;
	//for loop
		for (i = 0; i < 5; i++) {
	  		cout << "#";	
	  	}
	return 0;
}
