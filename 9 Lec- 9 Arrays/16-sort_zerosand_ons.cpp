#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i <size ; i++)
    {
        cout<<arr[i]<< " ";
    }
}
void sortarray(int arr[], int n)
{
    int i = 0 ;
    int j = n-1;
    while (i<j)
    {
        if (arr[i]==0)
        {
            i++;
        }
        else if (arr[j]==1)
        {
            j--;

        }
        else if (arr[i]==1 && arr[j]==0)
        {
            arr[i]= 0;
            arr[j]= 1;
        }
    }
}


 int main()
 {
    
    int array[13] =  {0,1,1,1,1,0,0,1,0,1,0,0,1};
    sortarray(array,13);
    printarray(array,13);


    return 0 ;
 }