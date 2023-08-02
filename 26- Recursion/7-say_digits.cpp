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
    cout<<arr[ans]<<" ";

    //recursive relation
    saydigit(n,arr);


    
}



int main() 
{
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n ;
    cin>>n;

    saydigit(n, arr);

return 0;
}