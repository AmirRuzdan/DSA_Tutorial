#include<bits/stdc++.h>
using namespace std;

void bubblesort(int array[], int size)
{
    for ( int j = 1 ;j < size; j ++)
    { 
        for (int i = 0; i <size-1;i++)
        {
            if ( array[i]>array[i+1])
        
            {
                swap(array[i],array[i+1]);
            }
        }
    }
}
int main ()
{

    int array[ 5] = { 3,6,9,2,5};
    bubblesort(array,5);
    for (int i = 0 ; i < 5 ; i ++)
    {
        cout << array[i]<< " ";
    }


    return 0;
}