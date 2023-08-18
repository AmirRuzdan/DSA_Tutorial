#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

bool binary_search(int arr[], int start,int end , int key)
{
    //base case

    printarray(arr,start, end);
    if (start >end )
    {
        return false ;
    } 
    int mid = start +(end - start)/2;
    cout<<"current value of the mid is = "<<arr[mid]<<endl;

    if(arr[mid ]== key)
    {
        return true;
    }
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
    bool ans = binary_search(array, 0, 5 , key);
    if(ans )
    {
    cout<<"The key element is found "<<endl;
    }
    else{
        cout<<"the element is not found"<<endl;
    }
return 0;
}