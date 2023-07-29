#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getmax(int a , int b)
{
    return (a>b) ? a:b;
}


int main()
{
    int a = 3, b =5;
    int ans;
    
    ans = getmax(a,b);       //tertiary operator

    cout<<"Maximum value is "<<max(a,b)<<"using max inbuilt function"<<endl;
    cout<<"answer using ternary operator function  is "<<ans<<endl;
    




return 0;
}