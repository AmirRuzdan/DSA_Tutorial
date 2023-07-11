#include <bits/stdc++.h>
#include<iostream>
using namespace std;





int main() 
{
    int num = 5;
    int *ptr = &num;
    int **ptr2 = &ptr;
    

    // cout<<"printing &num = "<<&num<<endl;
    // cout<<"printing ptr  ="<<ptr<<endl;
    // cout<<"Address of pointer ptr is &ptr ="<<&ptr<<endl;
    // cout<<"Value of *ptr2 is = "<<*ptr2<<endl;


    cout<<"different ways to print 5  "<<endl;
    cout<<num<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    cout<<"different ways to print ptr  "<<endl;
    cout<<&num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<"different ways to print ptr2  "<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    




return 0;
}