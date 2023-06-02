#include<iostream>
using  namespace std;
int swap(int array1[], int array2[])
{
    
}
int selectionsort(int array[],int n)
{
    for (int i = 0; i < n-1;i++)
    {
        int minIndex = i; 
    }
}

void printarray(int array [], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
        
    }
    
}
int  main()
{
    int array1[9] = {29,72,98,13,87,66,52,51,36};
    selectionsort(array1,9);
    printarray(array1,9);
    return 0;
    
}