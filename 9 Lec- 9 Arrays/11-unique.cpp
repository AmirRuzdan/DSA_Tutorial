#include<iostream>
using namespace std;


int unique(int arr[],int size)
{
    int ans=0;
     for ( int i = 0; i <size;i++)
    {
        ans = ans^arr[i];
    }
    cout<<"the unique element of array is "<<ans<<endl;

}

int main()
{
    int n;
    int myarray[7] = {3,7,2,2,7,3,4};

    unique(myarray,7);

    return 0;
}
