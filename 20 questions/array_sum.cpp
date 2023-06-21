// Add two arrays 
// input =  1238 ; 
        ///+   5;
// output = 1243
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse( vector<int> v)
{
    int i = 0;
    int j = v.size()-1;
    while( i<j)
    {
        swap(v[i++], v [j--]);
    }
    return v;
}
vector<int> arraysum( vector<int> a , int n , vector<int> b , int m)
{
    int i = n-1; 
    int j  = m-1;
    int carry= 0 ;
    vector<int> ans;
    while (i>=0 && j >= 0 )
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
        j--; 
    }
        while (i>=0  )
    {
        int val1 = a[i];
        int sum = val1  + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
    }
        while (j >= 0 )
    {
        int val2 = b[j];
        int sum =  val2 + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--; 
    }
    while(carry!=0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;

    }
    return reverse(ans) ;    // we are reversing this because the final answer will b ereturned in reversed order
    
    
}



int main() 
{
    vector<int> vec1 = { 9,9,9,9};
    vector<int> vec2 = { 9,9,9,9};
    vector<int> answer =   arraysum(vec1,4, vec2,4);
    for ( int i:answer)
    {
        cout<<i<< " ";
    }
return 0;
}