#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void printwave( int array[][4])
{
    for (int j = 0; j < 4; j++)
    {
        if(j%2==0)
        {
            for (int i = 0; i < 3; i++)
            {
                cout<<array[i][j]<<" ";
            }
                      
        }
        else
        {
           for (int i = 2; i >= 0; i--)
            {
                cout<<array[i][j]<<" ";
            }
        }
    }
    
}
int main() 
{
    int myarray[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printwave(myarray);

return 0;
}