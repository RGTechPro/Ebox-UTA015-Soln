#include <iostream>
#include<string>
#include<stdio.h>
#include  <bits/stdc++.h>

#include "ItemType.cpp"
using namespace std;
int main()
{
    ItemType it;
	string name;
	double deposit;
	double costPerDay;
	cout<<"Enter name:"<<endl;
	getline(cin, name);
	cout<<"Enter deposit:"<<endl;
	cin>>deposit;
	cout<<"Enter cost Per Day:"<<endl;
	cin>>costPerDay;
	
	it.setName(name);
	it.setDeposit(deposit);
	it.setCostPerDay(costPerDay);
	it.display();
}
