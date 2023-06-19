#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int length( char name[])
{
int count =0;
    for (int i = 0; name[i]!='\0'; i++)                // run loop till the null character present in the end
    {
        count++;
    }
    return count;
}



int main() 
{
    char name[20];
    cout<<"Enter your name ";
    cin>>name;
    cout<<"My name is "<<name<<endl;
    cout<<"Length of your name is "<<length(name);
return 0;
}