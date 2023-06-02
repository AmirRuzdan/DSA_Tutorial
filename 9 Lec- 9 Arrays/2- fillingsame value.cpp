#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int one[15];
    int i = 0;
    while(i<15)
    {
        one[i]=1;
        i = i+1;
    }
    
    for (i=0;i<15;i++)
    {
        cout<<one[i]<<endl;
    }
    return 0 ;
}