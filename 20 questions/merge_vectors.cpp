#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<< " ";
    }
}
void merge(int array1[], int n,int array2[], int m,int array3[])
{   
int i = 0;
int j = 0;
int k = 0;
while (i<n && j <m)
{
    if (array1[i]< array2[j])
    {
        array3[k++]= array1[i++];
    }
    else
    {
        array3[k++]= array2[j++];
    }
}     
while(i < n)
    {
        array3[k++] = array1[i++];
    }
while (j<m)
{
    array3[k++] = array2[j++];
}
}
int main() 
{   
    int array1[5] = {1,3,5,7,9};
    int array2[3] = {2,4,6};
    int array3[8] = {0};
    merge( array1,5, array2,3, array3);
    print(array3,8);
return 0;
}