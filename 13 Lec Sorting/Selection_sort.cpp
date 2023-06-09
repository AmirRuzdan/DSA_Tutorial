#include <bits/stdc++.h>
using namespace std;

void selection(int array[], int n)  // function is sorting the array in-place and not returning any value, hence its void function
{
    for(int i = 0 ; i <n-1;i++)
        {
            int minIndex = i ; //assuming it to be minimum
            for ( int j = i+1; j<n; j++)
            {
                if( array[j]<array[minIndex])
                    {
                        minIndex = j;
                    }
            }
            swap(array[minIndex],array[i]);
        }
}



int main()
{
    int array1[] = {4,7,2,8,4,9,1,0,23,65,22,7};
    int size = sizeof(array1)/sizeof(array1[0]);
    selection(array1, size);
    for(int i = 0 ; i<size ; i++)
    {
        cout<<array1[i]<< " ";
    }
    return 0;
}