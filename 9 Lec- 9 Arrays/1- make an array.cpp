//https://youtu.be/sNrLlmOIn-c?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=1296


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    //initializing an array
    int second[3] = {3,5,7};

    //accesing an array
    cout<<"value at second index is "<<second[2]<<endl;
    cout<<endl;

    //Printing the array
    cout<<"Printing the array"<<endl;

    for(int i=0; i<3;i++)
    {
        cout<<second[i]<<endl;
    }
    cout<<endl;

    //test line (if prints , everything is fine)
    cout<<"everything is fine"<<endl;

    return 0 ;
}