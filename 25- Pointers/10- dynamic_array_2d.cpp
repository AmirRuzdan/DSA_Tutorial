#include <bits/stdc++.h>
#include<iostream>
using namespace std;


// 2d dynamic array
int main() 
{
    int row ;
    cout<<"Enter the number of rows = ";
    cin>>row;
    cout<<endl;
    int col;
    cout<<"Enter the number of columns = ";
    cin>>col;
    //int *arr = new int[n]     ---> for one dimensional array   

   //CREATING A 2D ARRAY
    int **arr = new int*[row];   // array of pointers in stack memory 
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
  // TAKING INPUT
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    //PRINTING OUTPUT
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // RELEASING MEMORY
    for (int i = 0; i < row; i++)
    {
        delete [ ] arr[i];
    }

    delete []arr;

    // how to create a 2d array dynamically
    // input/ output
    



return 0;
}