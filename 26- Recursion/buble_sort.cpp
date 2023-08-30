#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<array>
using namespace std;

//PRINTING ARRAY
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
    cout<<array[i]<<" "; 
    }
}

void bubble_srt(vector<int> &a, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        
        for (int j = i+1; j <size; j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
            
        }
        
    }
}


int main() 
{

    vector<int>& array
    array= {9,6,4,21,5};

    bubble_srt(array,5);
    print(array, 5);


return 0;
}