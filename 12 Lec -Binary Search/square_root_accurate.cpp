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

double moreprecision(int n , int precision, int integerpart)
{
    double factor =1;
    double answer = integerpart;
     for(int i =0; i<precision;i++)
        {
            factor = factor/10;
            for (double j = answer; j*j<n; j = j+factor)
            {
                answer = j;          //important part 
            }
        }
        return answer;
}
int main()
{
    int x;
    int p;
    cout<<"enter any number = ";
    cin >>x;
    double integ = squarerootinteger(x);
    // cout<<"Enter the precision = ";
    // cin>>p;
    double final=moreprecision(x,3,integ);
    cout<<"The square root is "<<final; 

    return 0;
}