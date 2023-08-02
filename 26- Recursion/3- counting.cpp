#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    //base case
    if(n==0)
    {
        return ;
    }
    print(n-1);
    
    cout<<n<<endl;
    
}


int main()
{

    int n ;
    cout<<"enter your number = ";
    cin>>n;
    print(n);

return 0;
}