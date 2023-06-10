#include <bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;
int main() 
{
    set<int> s;   //only unique elements and elements do not repeat , this is an ordered set 
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(4);

    for( auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
    // s.erase(s.begin()+2);     This method is not working
    set<int>::iterator it =s.begin();
    it++;
    s.erase(it);
    cout<<"Erasing using iterator =";
     for( auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is 5 present or not ="<<s.count(5)<<endl;
    cout<<"Is -5 present or not ="<<s.count(-5)<<endl;


return 0;
}