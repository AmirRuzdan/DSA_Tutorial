#include <bits/stdc++.h>
#include<iostream>
using namespace std;



void update(int n )
{
    n++;
}
int main() 
{
// int i = 5;
// //create a reference variable 
// int &j = i ;        // reference variable 
// cout<<i<<endl;
// i++;
// cout<<j<<endl;
// j++;
// cout<<j<<endl;


int n = 5;
cout<<"Before value of n = "<<n<<endl;
update(n);
cout<<"After value of n = "<<n<<endl;

return 0;
}