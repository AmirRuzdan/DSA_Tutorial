#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(int i , int j, string &name)
{    
    // j = name.length()-1;
    if(i>j)
    {
        return;
    }

    swap(name[i],name[j]);
    return reverse(i+1,j-1,name);
}

int main() 
{
    string name = "babbar";
    reverse(0,name.length()-1,name);
    cout<<name<<endl;
return 0;
}