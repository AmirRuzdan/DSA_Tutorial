#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() 
{
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<binary_search(v.begin(),v.end(),9)<<endl;

return 0;
}