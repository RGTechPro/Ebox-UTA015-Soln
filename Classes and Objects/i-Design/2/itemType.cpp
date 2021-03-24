#include <iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;
class ItemType
{
    private:
string name;
double deposit;
double costPerDay;
public:
string getName()
{
   return name;
}
void setName(string itemname)
{
   name=itemname;
}

double getDeposit()
{
   return deposit;
}
void setDeposit(double itemname)
{
   deposit=itemname;
}

double getCostPerDay()
{
   return costPerDay;
}
void setCostPerDay(double itemname)
{
   costPerDay=itemname;
}

void display()
{
cout<<"Itemtype details:"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Deposit: "<<(int)getDeposit()<<endl;
cout<<"Cost Per Day: "<<(int)getCostPerDay()<<endl;
}
};
