#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void print( int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    
}

int partition(int *arr, int start , int end)
{
    int pivot = arr[start];

    // finding the right place of pivot using count
    int count = 0 ;
    for (int i = start+1; i<= end; i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotindex = start + count;
    swap( arr[pivotindex], arr[start]);
    

    int i = start;
    int j = end;

    while ( i<pivotindex && j>pivotindex)
    {
        while (arr[i]<pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }

        if (i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        
        }
        
        
        
    }
    return pivotindex;
    
}


void quicksort ( int *arr , int  start, int end)

{
     // base case
    if (start>=end)
    {
        return;
    }

    int p = partition(arr, start, end);

    // recursive call to sort left part    
    quicksort(arr,start , p-1 );
    // recursive call to sort right part
    quicksort(arr, p+1, end);
    
}



int main() 
{
    int array[5] = {7,6,4,3,1};
    int n = sizeof(array)/sizeof(array[0]);
    print(array, 5);
    cout<<endl;
    quicksort(array , 0 , n-1);
    print(array, 5);

return 0;
}