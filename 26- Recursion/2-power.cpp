#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int n )
{
    //base case
    if(n ==0)
    {
        return 1 ;
    }

    // recursive relation
    int smaller = power(n-1);
    int bigger = 2* smaller;
    return bigger;



    // return 2* power(n-1);   // code can be reduced in to simpler terms 


}


int main()
{
    int n, ans ;
    cin>>n;
    ans = power(n);
    cout<<ans<<endl;

    return 0;
}