#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void saydigit(int n, string arr[] )
{
    //base case
    if(n==0)
    {
        return;
    }

    // processing
    int ans = n%10;
    n= n/10;

    //recursive relation
    saydigit(n,arr);
    cout<<arr[ans]<<" ";   
}

int main() 
{
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n ;
    cout<<"enter your number =";
    cin>>n;
    saydigit(n, arr);

return 0;
}