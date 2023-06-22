#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int array[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>array[i][j];
        }
        
    }
    //1 2 3 4 5 6 7 8 9 10 11 12

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<array[i][j]<< " ";
        }
        cout<<endl;
        
    }

return 0;
}

/* 1 2 3 4
   5 6 7 8
   9 10 11 12
*/