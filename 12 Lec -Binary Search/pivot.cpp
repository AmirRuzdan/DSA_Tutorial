#include<iostream>
using namespace std;

int pivot(int array[], int n)
{
    int i = 0;
    int j = n-1;
    int mid = i+(j-i)/2;
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
    return i;  // dry run the code by writing on ipad to understand

}

int main()
{
int arr[5] = {8,10,17,1,3};
cout<<"The index of pivot element is "<<pivot(arr,5)<<endl;
    return 0;
}