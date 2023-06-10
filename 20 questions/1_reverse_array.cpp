#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int array[5]= {1,2,3,4,5};
    int n = 4;
    for(int i =0;i<2;i++)
    {
        swap(array[i],array[n-i]);

    }
    for(int i = 0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }   

return 0;
}