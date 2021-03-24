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
      cout<<"Name :"<<name<<endl;
      cout<<"Age :"<<age<<endl;
      cout<<"height :"<<fixed << setprecision(1)<<height<<endl;
      cout<<"weight :"<<fixed << setprecision(1)<<weight<<endl;
      cout<<"Gender :"<<gender<<endl;
      cout<<"Blood Group :"<<bloodGroup<<endl;
    }
};