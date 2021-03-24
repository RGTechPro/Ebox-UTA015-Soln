#include <iostream>
#include<string>
#include<stdio.h>
#include "Donor.cpp"
using namespace std;
int main()
{	  
    Donor A;
    int i,n;
    cout<<"Enter the number of donors:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Enter the donor details"<<i<<endl;
        cout<<"Enter the Name :"<<endl;
        cin>>A.name;
        cout<<"Enter the Age :"<<endl;
        cin>>A.age;
        cout<<"Enter the height :"<<endl;
        cin>>A.height;
        cout<<"Enter the weight :"<<endl;
        cin>>A.weight;
        cout<<"Enter the Gender :"<<endl;
        cin>>A.gender;
        cout<<"Enter the Blood Group :"<<endl;
        cin>>A.bloodGroup;
        
        
    
        cout<<"Donor details in the hospital database :"<<endl;
        cout<<"Donor"<<i<<endl; 
        A.display();
    }
    return 0;
}

