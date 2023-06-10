#include <bits/stdc++.h>
#include<iostream>
#include<queue>

using namespace std;
int main() 
{
    //max heap based
    priority_queue<int> maxi;     //maxi named max heap

    //min heap based
    priority_queue<int, vector<int>,greater<int>> min;  //mini named min heap

    maxi.push(5);
    maxi.push(2);
    maxi.push(0);
    maxi.push(1);
    maxi.push(4);
    cout<<"Initial maxi size = "<<maxi.size()<<endl;
    
    int n = maxi.size();
    for(int i = 0; i<n;i++)
    {
        cout<<maxi.top()<<" ";
        // cout<<"Size of maxi now is = "<<maxi.size()<<endl;
        maxi.pop();
    }
    cout<<endl;

    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);
    min.push(3);

    int m = min.size();
    for( int i =0; i<m;i++)
        {
            cout<<min.top()<<" ";
            min.pop();
        }
    cout<<min.empty()<<endl;
    return 0;
}