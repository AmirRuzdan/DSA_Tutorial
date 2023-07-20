#include<iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int  sum = 0 ;
     for (int i = 0; i < n; i++)
     {
        sum = sum+ arr[i];
     }
return sum ;     
}

int main()
{
    int n ;
    cout<<"Enter the size of array = ";
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];           // *(arr + i)
    }
    int ans = getsum(arr, n);
    cout<<ans<<endl;





    
   //static
    while(true)
    {
        int i = 5;
    }

    //dynamic
    while(true)
    {
        int *p = new int;
    }
    // "delete" keyword is used to free heap or stack memory
    //VOID POINTER
    //ADRESS TYPECASTING





    return 0;
}