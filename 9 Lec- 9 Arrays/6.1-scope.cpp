#include<iostream>
using namespace std;
void update(int* n)
{
    *n=6;
    cout<<"Inside the function :";
    cout<<*n;
    cout<<endl;
    cout<<"Going back to the main function"<<endl;
    
}

int main()
{
    int n = 5;
    update(&n);
    
    
    //printing the array
    cout<<n;
    }