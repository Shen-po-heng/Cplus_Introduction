/*
Program name:Ifelse&Switch
Editor:Shen Po Heng
Date:02.04.2020 
goal:the ifelse and switch of C++
if&else: It is conditionl statement. Based on the condition, it decide
a block of code should be executed or not to take different action
switch: It can select one of many code blocks to be executed.
*/
#include<iostream>
using namespace std;
int main(){
	int money;
	cout<<"How much money do you have? \n";
	cin>>money;
	if (money < 10000) 
  		cout << "You need to deposit more money, you just can apply a credit card.";
	else if(money>10000 && money<100000)
  		cout << "You can apply a credit card.";
	else
		cout << "You can get a VIP credit card.";
	cout<<endl;
	//Ternary Operator->another way to decide action
	string result = (money < 10000) ? "Reject" : "Permit";
	cout << result;
	cout<<endl;
	
	int meal_num;
	cout<<"Which meal do you want? (integer number between 1 and 6)\n";
	cin>>meal_num;
	switch (meal_num) {
  	  case 1:
    	cout << "BigMac";
    	break;
  	  case 2:
    	cout << "Chicken Burger";
    	break;
	  case 3:
	    cout << "Pork Burger";
	    break;
	  case 4:
	    cout << "Fried Chicken";
	    break;
	  case 5:
	    cout << "Fish Burger";
	    break;
	  case 6:
	    cout << "Chicken Nugget";
	    break;
	  default:
	    cout << "You only can input interger between 1 and 6";
	    break;
}
	return 0;
} 
