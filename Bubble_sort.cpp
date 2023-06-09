#include<bits/stdc++.h>
using namespace std;

void bubblesort(int array[], int size)
{
    for ( int i = 1 ;i < size; i ++)
    {   
        bool swapped = false; 
        for (int j = 0; j <size-i;j++)
        {
            if ( array[j]>array[j+1])
        
            {
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if(swapped== false)
        { // already sorted
            break;
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