#include<iostream>
using namespace std;


int firstoccur(int array[], int size, int key)
{
    int i = 0;
    int j = size - 1;
    int answer = -1;
    while (i<=j)
    {
        int mid = (i+j)/2;
        if(array[mid]==key)
        {
            answer = mid;
            j = mid - 1;
        }

        else if (key >array[mid])
        {
            i = mid+1;
        }
        else if( key<array[mid])
        {
            j = mid-1;
        }
        mid = (i+j)/2;
    }
    return answer;

}

int lastoccur(int array[], int size, int key)
{
    int i = 0;
    int j = size - 1;
    int answer = -1;
    while (i<=j)
    {
        int mid = (i+j)/2;
        if(array[mid]==key)
        {
            answer = mid;
            i = mid+1;
        }

        else if (key >array[mid])
        {
            i = mid+1;
        }
        else if( key<array[mid])
        {
            j = mid-1;
        }
        mid = (i+j)/2;
    }
    return answer;

}

int main()
{
    int even[5] = {1,2,3,3,5};
    cout<<"The first occurence of 3 is on index "<<firstoccur(even,5,3)<<endl;
    cout<<"The last occurence of 3 is on index "<<lastoccur(even,5,3)<<endl;
    return 0 ;
}