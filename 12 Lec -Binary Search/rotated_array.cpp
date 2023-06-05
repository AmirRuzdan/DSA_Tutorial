#include<iostream>
using namespace std;
int returnpivot(int array[], int n) /*Finding the pivot element*/
{
    int i = 0;
    int j = n-1;
    int mid = i+(j-i)/2;  //avoids data limit error
    while (i<j)
    {
        if ( array[mid]>=array[0])
        {
            i = mid+1;
        }
        else
        {
            j = mid;
        }
        mid = i + (j-i)/2;
    }
    return i;   //can also be returned j;
}
int binarysearch( int arr[], int start,int end, int key) /* Applying binary search after finding pivot element*/
{
    int i = start ;
    int j = end-1;
    while(i<=j)
    {
        int mid =(i+j)/2;
        if(arr[mid]== key)
        {
            return mid;   
        }
        if(key>arr[mid])
        {
            i = mid+1;
        }
        else
        {
            j = mid-1;
        }
        mid =(i+j)/2;
    }
    return -1 ;
}
int findposition(int array[], int n, int key)
{   
    int pivot = returnpivot(array, n);
    if (key>=array[pivot] && key<= array[n-1])
    {   //Binary search on 2nd line
        return binarysearch(array, pivot,n-1, key);
    }
    else{ //Binary search on second line
            return binarysearch(array, 0 , pivot-1,key);
    }
}
int main()
{
    int key;
    int array1[5] = { 7,9, 1,2,3};
    cout<<"Enter the key element to find =";
    cin>>key;
    cout<<"The index of key element is "<<findposition(array1, 5 , key)<<endl;
    return 0;
}