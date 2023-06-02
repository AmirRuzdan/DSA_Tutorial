#include<iostream>
using namespace std;

bool searching(int arr[],int n, int key)
    {
        for (int i =0 ; i<n;i++)
        {
            if (arr[i] == key)
            {
                return 1;
            }
             
        }
        return 0;
    }

int main()
{
    int arr[10] ={5,7,-2,10,22,-2,0,5,22,1};

    //wether 1 is present in the above array or not?
    cout<<"enter the element you want to search = ";
    int keyelement;
    cin>>keyelement;

    bool found ;
    found = searching(arr,10,keyelement);
    cout<<found<<endl;
    if (found ==0){
        cout<<"elemnt is not present"<<endl;
    }
    else{
        cout<<"Element is present";
    }

    return 0;
}