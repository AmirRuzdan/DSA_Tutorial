#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int n ;
    cin>>n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        array.push_back(i+1);
    }
    
    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }

    
    


return 0;
}