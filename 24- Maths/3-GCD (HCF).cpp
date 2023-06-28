
#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int gcd(int a , int b)
{
    if( a==0)
    {
        return b ;
    }
    if ( b ==0)
    {
        return a ;
    }
    while( a!= b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b= b-a;
        }

    }
    return a;
}




int main() 

{
    int a, b;
cout<<"Enter first number = ";
cin>>a;
cout<<endl;
cout<<"Enter second number = ";
cin>>b;
cout<<"The HCF of "<<a<< "and"<<b<<"is = "<<gcd(a,b);

return 0;
}