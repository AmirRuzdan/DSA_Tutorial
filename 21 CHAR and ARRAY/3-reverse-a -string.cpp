#include <bits/stdc++.h>
#include<iostream>
using namespace std;




void reverse( char name[], int size)
{   
    int i = 0 ;
    int j = size -1;
    while(i<j)
    {
        swap(name[i++], name[j--]);
    }
}

bool palindrome(char array[] )
{
    
}




int length( char name[])
{
int count =0;
    for (int i = 0; name[i]!='\0'; i++)
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
    cout<<"Length of your name is "<<length(name)<<endl;
    reverse(name,length(name));
    cout<<name;
return 0;
}