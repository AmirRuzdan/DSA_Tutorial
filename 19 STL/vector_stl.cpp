#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    cout<<"Capacity = "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Capacity = "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity = "<<v.capacity()<<endl; ///Capacity tells us total space available


    cout<<"Size = "<<v.size()<<endl; // size tells us the number of elements in the vector

    cout<<"Element at index 2 = "<<v.at(2)<<endl;
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"before pop = ";
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); 

    cout<<"after pop = ";
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clearing size = "<<v.size()<<endl;
    v.clear();   //size gets zero but not the capacity (here it is 4)
    cout<<"after clearing size = "<<v.size()<<endl;

    vector<int> a(5,1);
    cout<<"Print a = ";
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;
    /*Copy a vector in another vector*/
    vector<int> copy(a);
    cout<<"Print copy = ";
    for(int i:copy)
    {
        cout<<i<<" ";
    }

    return 0;
}