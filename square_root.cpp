#include<iostream>
using namespace std;

long long int squareroot( int n)
{
    int i = 0;
    int j = n;
    int ans = -1;
    long long int mid = i + ( j-i)/2;
    while(i<=j)
    {
        long long int square = mid*mid;
        if ( square == n)
        {
            return mid;
        }
        if (square<n)   
        {
            long long int ans = mid;
        }
        else
        {
            j = mid-1;
        }
        mid = i + (j-i)/2;
    }
    return ans;

}

int main()
{   
    int x;
    cout<<"Enter the number =";
    cin>>x;
    cout<<"the square root of x is "<<squareroot(x)<<endl;
    
    return 0 ;
}