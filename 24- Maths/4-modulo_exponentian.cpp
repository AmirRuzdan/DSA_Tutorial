#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int modularexponent(int x, int  n, int m)
{
    int res = 1;
    while (n>0)
    {
        if(n&1)  // odd
        { 
            res= (1LL*(res)*(x)%m)%m;

        }
        x= (1LL*(x)%m*(x)%m)%m;
        n=n>>1;     //divide by 2
    }
    return res;
}




int main() 
{
    int x, n ,m;
    cout<<"Enter your number = ";
    cin>>x;
    cout<<endl;
    cout<<"Enter your power = ";
    cin>>n;
    cout<<endl;
    cout<<"Enter modulo= ";
    cin>>m;
    cout<<"Your answer is = "<<modularexponent( x, n,m);
    

return 0;
}