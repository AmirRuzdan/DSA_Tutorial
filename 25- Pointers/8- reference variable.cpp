#include <bits/stdc++.h>
#include<iostream>
using namespace std;

////   BAD PRACTICE    ////    because it returns a local pointer of the function
int& function(int a )
{
    int num = a;
    int &ans = num;     //creating a reference variable
    return ans;
}


int* func(int num)
{
    int* ptr = &num;
    return ptr;
}

void update1(int n )
{
    n++;
}
void update2(int& n )
{
    n++;
}
int main() 
{
// int i = 5;
// //create a reference variable 
// int &j = i ;        // reference variable 
// cout<<i<<endl;
// i++;
// cout<<j<<endl;
// j++;
// cout<<j<<endl;


int n = 5;
cout<<"Before value of n = "<<n<<endl;
// update1(n);
// function(n);
cout<<"After value of n = "<<n<<endl;

return 0;
}