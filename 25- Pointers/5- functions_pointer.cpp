#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// void print(int *p )
// {
//     cout<<*p<<endl;
// }

// void update(int *p)
// {
//     p = p+1;
//     cout<<"Inside value = "<<p<<endl;
//     *p = *p +1;
// }

int getsum(int arr[], int n)             // in function, it doesnt pass entire array but the pointer *arr and address of first array
{
    int sum = 0 ; 
    // cout<<endl<<"Size of array inside the function  is ="<<sizeof(arr)<<endl;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i[arr];                       // arr[i] = i[arr]
    }
    return sum ;
    
}

int main() 
{
    // int value = 5;
    // int *p = &value;
    // // print(p);


    // cout<<"Before"<<p<<endl;
    // update(p);
    // cout<<"After"<<p<<endl;


    int arr[6] = {1,2,3,4,5,100};
    // cout<<"Size of array outside the function is ="<<sizeof(arr)<<endl;

    cout<<"the sum of array is = "<<getsum(arr,6)<<endl;
    cout<<"The sum of array with starting index 3 = "<<getsum(arr+3, 3);    // the size should also be 3
        return 0;
}

