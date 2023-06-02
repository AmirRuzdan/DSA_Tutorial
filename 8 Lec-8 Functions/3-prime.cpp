//https://youtu.be/8nNqk2NPbRA?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=3352
#include<iostream>
#include<stdio.h>
using namespace std;

//boolean type function
bool isPrime(int n)
{
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;

}

int main(){

    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"Is a prime number"<<endl;
    }
    else{
    cout<<"not a prime number"<<endl;
    }

    return 0;
}
