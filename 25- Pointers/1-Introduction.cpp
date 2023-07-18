#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int num = 5;
    int i = 10;
    cout<<num<<endl;
    int *ptr = &num;            //creation of pointer
    // address operator --> &
    cout<<"Address of num is (&num) ="<< &num <<endl;       // pointers stores address data
    cout<<"Value of *ptr is  ="<< *ptr <<endl;     // value stored at address ptr is *ptr  
    cout<<"Value of ptr is  ="<< ptr <<endl;       // address of num is ptr
    cout<<"Value of num is  ="<< num <<endl;       

   

return 0;
} 