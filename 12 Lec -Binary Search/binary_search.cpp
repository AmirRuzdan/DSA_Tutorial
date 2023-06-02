#include<iostream>
using namespace std;
int binarysearch(int array[],int size, int key)
{
    int i = 0;
    int j = size-1 ;
    while(i<=j)
    {
        
        int mid = (i+j)/2 ;

        if (array[mid]==key)
        {
            return mid;
        }
        if (key>array[mid])
        {
            i = mid+1;
        }
        else
        {
            j = mid-1;
        }
        mid = (i+j)/2;
    }
    return -1;
}

int main()
{   

    int array1[7] = {2,3,4,5,6,7,8};
    int answer = binarysearch(array1,7,8);
    cout<<"The index of key element is "<< answer<<endl;

    return 0;

}