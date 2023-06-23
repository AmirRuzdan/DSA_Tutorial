#include <bits/stdc++.h>
#include<iostream>
using namespace std;



void printsum(int array[][4], int row , int column)
{
        for (int i = 0; i < 3; i++)
        {
            int sum = 0;
            for (int j = 0; j < 4; j++)
            {
                sum= sum + array[i][j];
            }
            cout<<"The sum of row number "<<i<<"is = "<<sum<<" "<<endl;
        }       
}

int main() 
{
    int myarray[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>myarray[i][j];
        }       
    }
    //1 2 3 4 5 6 7 8 9 10 11 12

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<myarray[i][j]<< " ";
        }
        cout<<endl;
    }
printsum(myarray,3,4);


}

/* 1 2 3 4
   5 6 7 8
   9 10 11 12
*/