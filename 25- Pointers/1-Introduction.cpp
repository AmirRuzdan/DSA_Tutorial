#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int num = 5;
    int *ptr = &num;


    cout<<"Address (&num) of num is "<< &num <<endl;       // pointers stores address data

    cout<<"The value (*ptr) is = "<<*ptr<<endl;
    cout<<"*ptr stores value of num"<<*ptr<<endl;
    cout<<"The value of ptr is = "<<ptr<<endl;

return 0;
}