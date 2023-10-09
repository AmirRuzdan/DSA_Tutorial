#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main() 
{
long long n;
cout<<"Enter the term of the fibonacci series";

cin>>n;

// int start =0;
long long firstvalue= 0;
long long secondvalue= 1;
long long currentvalue;

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