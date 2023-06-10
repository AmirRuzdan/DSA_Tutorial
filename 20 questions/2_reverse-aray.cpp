#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v)
{
    for(int i:v)
    {
        cout<<i<<" ";

    }
}

vector<int> reverse(vector<int> v)
{
    int i = 0;
    int j = v.size()-1;
    while(i<=j)
    {
        swap(v[i], v [j]);
        i++;
        

    }
    return v;
}


int main() 
{

    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    cout<<"Before reversing =";
    print(v);
    cout<<endl;
    vector<int> ans = reverse(v);
    print(ans);
return 0;
}