#include<stdio.h>
#include "Donor.cpp"
using namespace std;
int main()
{   
	
    int i,n;
    cout<<"Enter the number of donors:"<<endl;
    cin>>n;
	Donor donors[n];
    for(i=0;i<n;i++){
        Donor A;
        cout<<"Enter the donor details"<<i+1<<endl;
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
		
		donors[i] = A;
    }
	
	cout<<"Donor details in the hospital database :"<<endl;
	for(i=0;i<n;i++){
		cout<<"Donor"<<i<<endl; 
        A.display();
	}
	
    return 0;
}