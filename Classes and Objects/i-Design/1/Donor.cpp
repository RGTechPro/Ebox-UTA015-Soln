#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Donor
{
    public:
    string name;
    int age;
    float height;
    float weight;
    string gender;
    string bloodGroup;
    
    void display()
    {
      cout<<"Donor details are :"<<endl;
      cout<<"Name :"<<name<<endl;
      cout<<"Age :"<<age<<endl;
      cout<<"height :"<<setprecision(2)<<height<<endl;
      cout<<"weight :"<<setprecision(2)<<weight<<endl;
      cout<<"Gender :"<<gender<<endl;
      cout<<"Blood Group :"<<bloodGroup<<endl;
    }
};