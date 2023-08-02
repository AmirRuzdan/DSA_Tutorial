#include <bits/stdc++.h>
#include<iostream>
using namespace std;




int main() 
{
int n;
cout<<"Enter the term of the fibonacci series";

cin>>n;

// int start =0;
int firstvalue= 0;
int secondvalue= 1;
int currentvalue;

for(int i =0 ; i<n;i++)
{
    // cout<<start<<endl;
    currentvalue =firstvalue + secondvalue;
    firstvalue= secondvalue;
    secondvalue= currentvalue;
    cout<<currentvalue<<endl; 

}






return 0;
}