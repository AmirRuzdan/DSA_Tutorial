#include<iostream>
using namespace std;

//creating a function
void printArray(int array[], int size)
{
    cout<<"Printing the array :";
    for(int i = 0 ; i <size;i++)
    {
        cout<<array[i]<< " ";
    }        
}

// SIZE OF OPERATOR USE

int main()
{
    int numb[5]= {1,2,3,4,5};

    printArray(numb,5);

    cout<<endl;

    cout<<"Size of array is : "<<sizeof(numb)<<endl;  //size of gives memeory size of array ,
                                // here it is 5 x 4 = 20 since each array
                                // block is of 4 bytes
    cout<<"Length of array numb is :"<<sizeof(numb)/4<<endl;


    char ch[5] = {'a','e','i','o', 'u'};
    cout<<ch[3]<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";

    }
    return 0;

}