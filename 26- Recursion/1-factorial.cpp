#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int factorial(int n)
{
    //base case 
    if(n==0)
    {
        return 1;
    }
    //recursive relation
    // int smaller = factorial(n-1);
    // int bigger = n*smaller;



    return n*factorial(n-1);


}
int main()
{
    int n ;
    cout<<"Enter your number = ";
    cin>>n;
    int ans = factorial(n);
    cout<<ans << endl;

 


return 0;
}