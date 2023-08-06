#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool  is_found ( int arr[] , int size, int key )

{   
    if(size==0)
    {
        return false  ;

    }
    if( arr[0]== key)
    {
        return true;
    }
    else 
    {
        bool ans = is_found(arr+1,size -1 , key );
        return ans ;
    }
}


int main()
{
    int array[6] = {2,3,4,5,6,77};
    int size = 6 ;
    int key;
    cout<<"Enter your key element =";
    cin>>key;
    bool ans = is_found( array, size, key);
    if ( ans )
    {
        cout<<"element is present in the array"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }


return 0;
}