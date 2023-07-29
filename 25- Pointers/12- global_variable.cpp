#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//global variable    //bad practice
int score = 15 ;

void test1(int i)     // makes a copy of the variable
{
    cout<<"score in test1 ="<<score<<endl;    
    cout<<i<<endl;
}
void test2(int& i )   //takes memory reference
{
    cout<<"score in test2 ="<<score<<endl;
    cout<<i<<endl;
}

int main()
{
    int i= 5;
    test1(i);


    test2(i);
    cout<<"score in main ="<<score<<endl;
return 0;
}