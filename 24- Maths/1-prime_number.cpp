 #include <bits/stdc++.h>
 #include<iostream>
 using namespace std;
 
 bool isprime(int n)
 {
    if(n<=1)
    {
        return false;
    }
    for (int i = 2 ; i<n/2 ; i++)
    {
        if(n%i==0)
        {
            return false; 
        }
        
    }
    return true;
 }
 int countprime(int n)
 {
    int count= 0;
    for (int i = 2; i < n; i++)
    {
        if(isprime(i))
        {
            count++;
        }
    }
    return count;
 }
 
 
 
 int main() 
 {
    int n;
    cout<<"Enter your number = ";
    cin>>n;
    if(isprime(n))
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
    cout<<endl;
    cout<<"The number of prime numbers before "<<n<<" is = "<<countprime(n);
    return 0;
 }