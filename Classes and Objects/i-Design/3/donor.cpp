#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Donor
{
    public:
    string name;
    int age;
    float height, weight;
    string gender, bloodGroup;
    
    void display()
    {
        
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"height :"<<height<<endl;
        cout<<"weight :"<<weight<<endl;
        cout<<"Gender :"<<gender<<endl;
        cout<<"Blood Group :"<<bloodGroup<<endl;
    }
};

