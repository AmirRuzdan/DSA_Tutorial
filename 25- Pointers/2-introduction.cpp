#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{

    // int *p ;  // bad practice--> pointer to int is created and pointing to some garbage address
    // cout<<*p<<endl;
    // int num = 5;

    // int *p= &num ;

    // int *p= 0;
    // p = &num;

    // cout<<*p;

    int num = 5;
    int a = num;
    a++;
    // cout<<"value of num is = "<<num<<endl;

    int *p  = &num;
    cout<<"value of *p before= "<<*p<<endl;
    (*p)++;
    cout<<"value of *p now = "<<*p<<endl;

    int q = *p;                      //copying one pointer to another pointer
    cout<<"Value of p = "<<p<<endl;
    cout<<"Value of q = "<<q<<endl;
    cout<<"Value of *p = "<<*p<<endl;
    // cout<<"Value of *q = "<<*q<<endl;


    //important concepts

    int i = 3;
    int *t = &i;
    // cout<<(*t)++<<endl;
    *t = *t +1;
    cout<<*t<<endl;
    t= t+1;
    



return 0;
}