#include<iostream>
using namespace std;



void printarray(int arr[],int n)
{
    for (int i =0 ;i<n;i++)
    cout<<arr[i]<< " ";

}

int swap(int arr[],int n)

{
    int temp;
    for (int i=0;i<n-1;i=i+2)
    {
        temp= arr[i];
        arr[i] = arr[i+1];
        arr[i+1]= temp;

    }
    return 0;
}




int main ()
{
    int array[]= {1,2,3,4,5,6};
    swap(array,6);
    printarray(array,6);
    return 0;
}