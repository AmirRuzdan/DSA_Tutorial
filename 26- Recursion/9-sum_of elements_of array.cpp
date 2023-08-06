#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arraysum(int *array, int size)
{
    //base case
    if(size ==0 )
    {
        return 0;
    }
    if(size ==1)
    {
        return array[0];

    }
    int remaining_sum = arraysum(array+1, size - 1);
    int sum = array[0] + remaining_sum ;
    return sum ;
}



int main()
{

    int array[5] = {2,3,4,5,6};
    int ans = arraysum(array, 5);
    cout<<"The sum of elements of array is "<<ans <<endl;
return 0;
}