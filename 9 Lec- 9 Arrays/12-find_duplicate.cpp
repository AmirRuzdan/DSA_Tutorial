#include<iostream>
using namespace std;


int duplicate(int arr[], int size)
{
    int ans = 0;
    for( int i =0 ;i<size;i++)
        {
            ans = ans^arr[i];
        }
    for ( int i = 1 ; i<size;i++)
    {
        ans = ans^i;

    }
    cout<<"The duplicate value is "<<ans;
    return ans;
}

int main()
{
    int myarr[7]= {1,2,3,4,5,6,6};
    duplicate(myarr,7);
    return 0;
}