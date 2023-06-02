#include<iostream>
using namespace std;


int peak(int array[], int size, int key)
{
    int i =0;
    int j = size-1;
    int mid = i+ (j-i)/2 ;
    while ( i<j)
    {
        if (array[mid]<array[mid+1])
        {
            i = mid+1;

        }
        else
        {
            j = mid;
        }
        mid = i +(j-i)/2;
    }
    return -1;
}




int main()
{
    return 0;
}