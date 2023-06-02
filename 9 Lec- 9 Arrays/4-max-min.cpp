#include<iostream>
using namespace std;

//creating getmax function
int getMax(int array[],int size)
{
    int max =INT_MIN;
    for(int i = 0 ; i <size;i++)
    {   
        if (array[i]>max)
        {
        max = array[i] ;
        }
    }
    return max;
}

//create getmin function
int getMin(int array[],int size)
{
    int min =INT_MAX;
    for(int i = 0 ; i <size;i++)
    {   
        if (array[i]<min)
        {
        min = array[i] ;
        }
    }
    return min;
}


//Code to take input in the array
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int num[100];
    cout<<"int min value is :"<<INT32_MIN<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cin>>num[i]; //taking input in array
    }
        for (int i = 0; i < n; i++)
    {
        cout<<num[i]; //taking input in array
    }
    cout<<"The maximum value of the input array is "<<getMax(num,n)<<endl;
    cout<<"The minimum value of the input array is "<<getMin(num,n)<<endl;
    return 0;

}