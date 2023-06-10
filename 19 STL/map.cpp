#include <bits/stdc++.h>
#include<iostream>
#include<map>

using namespace std;
int main() 
{
    map<int, string> m;
    m[1] = "apple";
    m[2] = "banana";
    m[13] = "car";
    
    
    cout<<"beforeadding car"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.insert({5,"sun"});
    
    cout<<"after adding car"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" " <<i.second<<endl;
    }
    cout<<"finding 13 (yes or no) = "<<m.count(13)<<endl;

    cout<<"after erasing car "<<endl;
    m.erase(13);
    
    for(auto i:m)
    {
        cout<<i.first<<" " <<i.second<<endl;
    }


    return 0;

}