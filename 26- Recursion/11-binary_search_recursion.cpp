#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int start,int end , int key)
{
    //base case
    if (start >end )
    {
        return ;
    } 
    int mid = start +(end - start)/2;
    if(arr[mid]<key)
    {
        return binary_search(arr, mid+1, end, key);
    }
    else
    {
        return binary_search(arr, start, mid-1 , key);
    }
        

}

int main()
{

    int array[6] = { 2,4,6,8,10,12};
    int size = 6;
    int key;
    cout<<"Enter your key element = ";
    cin>>key;
    bool ans = binary_search(array, start, end , key);
    cout<<"The key element is present at "<<ans<<endl;



return 0;
}