#include <iostream>
#include <stdio.h>
using namespace std;

void printer(int n)
{
   
    for(int i =0; i <=n; i++)
    {
        cout<<i<<endl;
    }
        

}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    printer(n);
    return 0;
}