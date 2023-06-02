#include<iostream>
using namespace std;
void update(int arr[],int n)
{
    cout<<"Inside the function :";
    //printing the array
    for (int i = 0; i <n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to the main function"<<endl;
    
}

int main()
{
    int arr[4]= {1,2,3,4};
    
    update(arr,4);
    int arr2[3]={2,3,4};
    update(arr2,3);
    
    //printing the array
    cout<<"Printing the main function :";
    for(int i ; i <4;i++)
        cout<<arr[i]<<" ";
}