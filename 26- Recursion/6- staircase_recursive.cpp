#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int stairs(long long n)
{

    // base case
    if(n<0)
    {
        return 0;
    }

    if(n == 0)
    {
        return 1;
    }
    // recursive relation
    return stairs(n-1) + stairs(n-2);

}



int main() 
{
    long long n;
    cout<<"Enter number of stairs = ";
    cin>>n;
    cout<<stairs(n);


return 0;
}