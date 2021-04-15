#include <iostream>
#include<string>
#include<stdio.h>
#include "ItemType.cpp"
using namespace std;
int main()
{
    ItemType it;
    string name;
double deposit;
double costPerDay;
    cout<<"Enter name:\n";
    cin>>name;
    it.setName(name);
    cout<<"Enter deposit:\n";
    cin>>deposit;
    it.setDeposit(deposit);
    cout<<"Enter cost Per Day:\n";
    cin>>costPerDay;
    it.setCostPerDay(costPerDay);
    it.display();
    return 0;
	//fill the code 
}
