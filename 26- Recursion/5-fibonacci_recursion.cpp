#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int fib (int n )
{
    //base case
    {
        if(n==0)
        { return 0;} 
        if(n==1)
        { return 1;}
    }
    //processing
    //recursive relation
    return fib(n-1)+fib(n-2);

}


int main() 
{
    int n;
    cout<<"enter the term of fibonacci number = ";
    cin>>n;
    fib(n);
    

return 0;
}