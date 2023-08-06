#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool  is_found ( int *arr , int size, int key )
{
    
}




int main()
{
    int array[5] = {2,3,4,5,6};
    int key;
    cout<<"Enter your key element =";
    cin>>key;
    int ans = is_found( array, 5, key);
    if ( ans )
    {
        cout<<"element is present int the array"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    

return 0;
}