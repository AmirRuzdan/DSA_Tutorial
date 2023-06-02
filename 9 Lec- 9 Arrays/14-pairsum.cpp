#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int sum;
    cout<<"Enter the value of sum : "<<endl;
    cin>>sum;
    int array [6]= {1,2,3,4,5,6} ;
    for (int i =0 ; i< n;i++)
    {
        for ( int j= i+1; j<n;j++ )
        {
            if (array[i]+array[j]==sum)
            {
                cout<<"The answer is "<<array[i]<<" and "<<array[j]<<endl;
            }
        }
    }
    return 0;
}