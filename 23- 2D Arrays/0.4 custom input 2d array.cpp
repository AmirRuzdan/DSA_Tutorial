#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void print(int array[3][4])
{

        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main() 
{   
    int array1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int array2[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}}; 
    print(array1);
    print(array2);

return 0;
}
