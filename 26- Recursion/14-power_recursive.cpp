#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int power(int a , int b)
{
    //base case
    if(b==0)
    {
        return a;
    }
    if ( b==1)
    {
        return a;
    
    }
    //recursive call
    int ans = power(a, b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }


    
}






int main() 
{
int a, b;
cout<<"Enter your number = ";
cin>>a;
cout<<endl;
cout<<"Enter your power = ";
cin>>b;
int ans = power(a,b);
cout<<"Your answer is "<<ans;

return 0;
}