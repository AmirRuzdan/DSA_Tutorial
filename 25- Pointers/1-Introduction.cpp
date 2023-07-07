#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int num = 5;
<<<<<<< Updated upstream
    int *ptr = &num;


    cout<<"Address (&num) of num is "<< &num <<endl;       // pointers stores address data

    cout<<"The value (*ptr) is = "<<*ptr<<endl;
    cout<<"*ptr stores value of num"<<*ptr<<endl;
    cout<<"The value of ptr is = "<<ptr<<endl;
=======
    int i = 10;
    cout<<num<<endl;
    int *ptr = &num;
    // address of operator --> &
    cout<<"Address of num is (&num) ="<< &num <<endl;       // pointers stores address data
    cout<<"Value of *ptr is  ="<< *ptr <<endl;     // value stored at address ptr is *ptr  
    cout<<"Value of ptr is  ="<< ptr <<endl;       // address of num is ptr
    cout<<"Value of num is  ="<< num <<endl;       // address of num is ptr

   
>>>>>>> Stashed changes

return 0;
} 