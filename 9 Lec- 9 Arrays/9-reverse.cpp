#include<iostream>

using namespace std;

void printarray(int arr[],int n)
{
    for ( int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int swap(int array[], int n)
{
    int temp;
    for (int i =0 ;i<n/2;i++)

        {
            temp = array[i];
            array[i]= array[n-i-1];
            array[n-i-1] = temp;
        }
        return 0 ;
}

int main()
{
    int arr[10] = {2,3,4,5,6,7,8,9,10,1};
    int array1[5] = { 3,5,7,9,10};
    swap (arr,10);
    printarray(arr,10);
    cout<<endl;
    swap (array1,5);
    printarray(array1,5);


    return 0;

}