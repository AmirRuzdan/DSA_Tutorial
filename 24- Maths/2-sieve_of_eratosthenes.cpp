#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int countprime( int n)
{
    int count = 0;
    vector<bool> prime( n+1, true );
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
        
        for (int j = 2*i; j <n; j = j+i)        //additive multiplication
        {
            prime[j ]= 0;
        }
        }
        
        
    }
    return count;
    
}
 int main() 
 {
    int n;
    cout<<"Enter your number = ";
    cin>>n;
    cout<<endl;
    cout<<"The number of prime numbers before "<<n<<" is = "<<countprime(n);
    return 0;
 }