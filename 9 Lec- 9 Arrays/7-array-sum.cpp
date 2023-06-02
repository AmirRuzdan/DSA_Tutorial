#include<iostream>
using namespace std;

int main()
{
    int arr[100],n;
    cout<<"Enter the size of the array =";
    cin>>n;
    cout<<"Enter the array"<<endl;
    for (int i = 0 ; i<n; i ++)
    {
        cin>>arr[i];
    }

    //     for (int i = 0 ; i<n; i ++)
    // {
    //     cout<<arr[i];
    // }
    int sum = 0 ;
    for (int i = 0;i<n;i++)
    {
        sum= sum +arr[i];

    }
    cout<<sum<<endl;
}