#include<iostream>
using namespace std;
long long int squarerootinteger(int n)
{
    int i = 0;
    int j =n;
    long long int mid = i + (j-i)/2;
    int ans;
    while (i<=j)
    {
        long long int square = mid*mid;
        if (square ==n)
        {
            return mid;
        }
        if ( square<n)
        {
            ans = mid;
            i = mid+1;
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
    cout<<"enter any number = ";
    cin >>x;
    cout<<"the square root of your number is "<<squarerootinteger(x)<<endl;
    return 0;
}