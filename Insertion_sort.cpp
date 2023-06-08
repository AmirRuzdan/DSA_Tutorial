#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int size)

{
     for (int i =1; i<size; i++)   // number of rounds
    {
        int temp = arr[i];
        int j =i-1 ;
        for (; j>=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1] = arr[j];

            }
            else
            {
                break;
            }
            
        }
        arr[j+1]= temp;
    }

}

int main()
{
    int array[7] = {9,4,6,2,10,1,14};
    insertion(array,7);
    for(int i = 0 ; i<7 ; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}