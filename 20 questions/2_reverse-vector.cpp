#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void print(const vector<int>& v)
{
    for(int i:v)
    {
        cout<<i<<" ";

    }
}

vector<int> reverse(vector<int> v)
{
    int mid = v.size()/2;
    for(int i = 0; i <mid;i++)
 {
    swap(v[i],v[v.size()-1-i]);
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
    cout<<"after reversing = ";
    vector<int> ans = reverse(v);
    print(ans);

return 0;
}