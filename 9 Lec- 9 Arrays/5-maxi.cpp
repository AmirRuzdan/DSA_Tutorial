#include<iostream>
using namespace std;

// max inbuilt function of c++
int getmax(int num[],int size)
{
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maximum = max(maximum,num[i]);   
    }
    return maximum;
}
// min inbuilt function of c++
int getmin(int num[],int size)
{
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minimum = min(minimum,num[i]);   
    }
    return minimum;
}
int main()
{
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int number[100];
    for (int i = 0; i < n; i++)
    {
        cin>>number[i];
    }
    cout<<"Maximum value of array is = " <<getmax(number,n)<<endl;
    cout<<"Minimum value of array is = " <<getmin(number,n)<<endl;      
}