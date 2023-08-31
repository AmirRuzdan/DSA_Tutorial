#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void print( int *arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void merge_array( int *arr, int start , int end)
{
    // start by dividing the array 
    int mid = ( start + end )/2;


    // length of first array 
    int len1 = mid- start + 1;


    // length of second array
    int len2 = end- mid;
    

    // create empty arrays of len1 and len2 in heap memory
    int *first = new int[len1];
    int *second = new int[len2];


    //copying values in left part in empty arrays
    int k = start;          //k == main array index
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }


    //copying values in left part in empty arrays
    k = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }


    //merge these 2 sorted arrays
    int index1= 0;
    int index2= 0;
    k = start;

    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[k++]= first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }

   while(index1<len1 )
    {
     
        {
            arr[k++]= first[index1++];
        }
    }
while( index2<len2)
    {
            arr[k++]=second[index2++];

    }
    
     
    
    
    }


void merge_sort( int *arr , int start , int end )
{
    
    // base case
    if(start>=end)
    {
        return;
    }


    int mid = (start+ end)/2;

    // sorting left part
    merge_sort(arr, start, mid);


    //sorting right part
    merge_sort(arr, mid+1,end);
    merge_array( arr , start ,end);
}

int main() 
{
    int n  = 10;
    int array[10]= {9,8,7,33,6,5,4,3,2,5};
    print(array , 10);
    cout<<endl;
    merge_sort(array, 0 , n-1);
    print(array,10);
return 0;
}