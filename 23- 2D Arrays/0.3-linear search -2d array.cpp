#include<iostream>
using namespace std;
bool arraysearch(int array[3][4],int number, int row,int column)     // why giving column is necessary to avoid error?
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j]== number)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main() 
{
    int array1[3][4];                       // 1 2 3 4 5 6 7 8 9 10 11 12 
    cout<<"Enter the elements of array = ";
    // row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>array1[i][j];
        }
    }
        //output
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<array1[i][j]<< " ";
        }
        cout<<endl;
    }
int targetnumber;
cout<<"Enter the element you want to find = ";
cin>>targetnumber;
if(arraysearch(array1,targetnumber,3,4))
{
    cout<< "Element is found";
}
else{
    cout<<"Not found";
}

return 0;
}