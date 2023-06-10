#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() 
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);
    cout<<"Finding element 6 = "<<binary_search(v.begin(),v.end(),6)<<endl;    // it only tells if ELEMENT EXISTS OR not
    // cout<<binary_search(v.begin(),v.end(),9)<<endl;
    //Finding the index of element using iterator


    cout<<"Lower bound = "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

return 0;
}