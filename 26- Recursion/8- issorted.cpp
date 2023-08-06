#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int size)
{
    //base case
    if (size ==0 || size ==1 )
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false ;
    }
    else 
    {
        bool ans = issorted(arr +1, size-1);   // recursive relation
        return ans;
    }


}


int main()
{
    int array[5]= {2,8,4,5,6};

    bool ans = issorted(array, 5);
    if(ans)
    {
        cout<<"The array is sorted "<<endl;
    }
    else 
    {
        cout<<"The array is not sorted"<<endl; 
    }

    
    return 0;
}