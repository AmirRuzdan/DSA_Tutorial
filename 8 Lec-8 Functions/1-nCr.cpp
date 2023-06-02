#include<iostream>
#include<math.h>
using namespace std;
int factorial(int a )
{
    int factor = 1;
    for (int i = 1; i <= a; i++)
    {
        factor = factor*i;
        
    }
    return factor;
    
}
int nCr(int n , int r)
{
    int ans = factorial(n)/(factorial(n-r))*(factorial(r));
    return ans;
}

int main()

{
    int b,c;
    cout<<"Enter the value of n :";
    cin>>b;
    cout<<"Enter the value of r :";
    cin>>c;
    cout<<"Your answer is :"<<nCr(b,c)<<endl;
    return 0;
}
