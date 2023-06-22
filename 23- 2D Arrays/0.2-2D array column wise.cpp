#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int array[3][4];

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin>>array[i][j];
        }
        
    }
    

    
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


/* 1 4 7 10 
   2 5 8 11 
   3 6 9 12 
*/