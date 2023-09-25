#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
while(t--)
{

    int n ;
    cin>>n;
    long long *array = new long long[n];

    for (int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    int j = 1;

for (int i = 0; i < n; i++)
{
    while(j>0)
    {
        if (j!=array[i])
        {
            array[i]=j;
            j++;
            break;
        }
        j++;
    }
}
cout<<array[n-1]<<endl;
delete (array);
}

return 0;
}