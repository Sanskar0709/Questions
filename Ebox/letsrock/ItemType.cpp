
#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class ItemType
{
	private:
string name;
double deposit;
double costPerDay;

public:

double getCostPerDay() {
	return this->costPerDay;
}
void setCostPerDay(double costPerDay) {
	this->costPerDay = costPerDay;
}

string getName() {
	return this->name;
}
void setName(string name) {
	this->name = name;
}

double getDeposit() {
	return this->deposit;
}
void setDeposit(double deposit) {
	this->deposit = deposit;
}


	//fill the code 
void display()
{
cout<<"Itemtype details:";
cout<<"Name :"<<getName();
cout<<"\nDeposit :"<<getDeposit();
cout<<"\nCost per day :"<<getCostPerDay();
	//fill the code 
}
};
