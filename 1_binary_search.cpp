#include<iostream>
using namespace std;

int binarysearch( int arr[], int n, int key) //n = size of array
{
    int i = 0 ;
    int j = n-1;
    while(i<=j)
    {
        int mid =(i+j)/2;

        if(arr[mid]== key)
        {
            return mid;   //we need to return the position of the key element

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




int main()
{
int even[5] = {1,2,3,3,5};
int answer = binarysearch(even,5,2);


cout<<"Our answer is "<<answer<<endl;
return 0;

    
}
