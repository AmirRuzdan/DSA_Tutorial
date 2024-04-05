#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int num = 5;
    cout<<num<<endl;
    //creation of pointer
    int *ptr = &num;            
    // address operator --> &
    cout<<"Address of num is (&num) ="<< &num <<endl;       // pointers stores address data
    // value stored at address ptr is *ptr
    cout<<"Value of *ptr is  ="<< *ptr <<endl;   
    // address of num is ptr    
    cout<<"Value of ptr is  ="<< ptr <<endl;       
           

   

return 0;
} 