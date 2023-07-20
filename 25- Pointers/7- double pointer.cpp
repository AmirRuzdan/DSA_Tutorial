#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2+1;     -- > NO changes occur

    //*p2 = *p2 +1;   --> value of ptr changes

     **p2 = **p2 + 1;  // --> this will change 
}


int main() 

{
    int num = 5;
    int *ptr = &num;
    int **ptr2 = &ptr;
    

    // cout<<"different ways to print 5  "<<endl;
    // cout<<num<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;
    // cout<<"different ways to print ptr  "<<endl;
    // cout<<&num<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr2<<endl;
    // cout<<"different ways to print ptr2  "<<endl;
    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;

    cout<<endl<<endl;
    cout<<"before ="<<num<<endl;
    cout<<"before ="<<ptr<<endl;
    cout<<"before ="<<ptr2<<endl;

    update(ptr2);

    cout<<"after ="<<num<<endl;
    cout<<"after ="<<ptr<<endl;
    cout<<"after ="<<ptr2<<endl;


return 0;
}