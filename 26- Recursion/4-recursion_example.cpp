#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void reachHome(int src , int dest)
{
    cout<<"Source "<<src<<" "<<"dest "<<dest<<endl;
    
    //base case
    if(src== dest)
    {
        cout<<"reached home"<<endl;
        return;
    }
    //processing
    src++;
    //recursive relation
    reachHome(src, dest);

}
int main() 
{
int dest = 10;
int src = 1;

reachHome(src, dest);

return 0;
}