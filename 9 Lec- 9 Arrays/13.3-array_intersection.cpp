#include<iostream>
using namespace std;

int main()
{
    int array1[6] = {1,2,2,2,3,4};
    int array2[4] = {2,2,2,4};
    
    int i = 0, j = 0 ;
    while(i<6 &&j <4)
    {
        if (array1[i]==array2[j])
        {
            cout<<array1[i]<<" ";
            i++;
            j++;
        }
        else if(array1[i]<array2[j])
        {
            i++;
        }
        else if (array1[i]>array2[j])
        {
            j++;
        }
    }
return 0;

}