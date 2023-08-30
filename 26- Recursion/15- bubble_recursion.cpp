#include <bits/stdc++.h>
#include<iostream>
using namespace std;



void print( int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void sort_array(int *arr, int n)

//base case 
{
    if(n==0 || n ==1)
    {
        return;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    } 
    
    sort_array(arr, n-1);




}



int main() 
{

int array[10]= {8,4,6,1,3,9,7,5,6,4};
print(array,10);
cout<<endl;
sort_array(array,10);
print(array,10);


return 0;
}