// input = { 3,4,5,1,2} --> Output = True
// input = { 3,4,5,1,6} --> Output = False



#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool checkvector( vector<int>& nums)
{
    int count = 0;
    for (int  i = 1; i < nums.size(); i++)
    {
        if(nums[i-1]>nums[i])
        {
            count++;
        }
        if ( nums[nums.size()-1]>nums[nums.size()])
        {
            count++;
        }
    }
    return count<=1;
}


void print(vector<int> v)
{
    for( int i:v)
    {
        cout<<i<<" ";
    }
cout<<endl;
}
int main() 
{
    vector<int> v ={ 3,4,5,1,6};
    print(v);
    checkvector(v);
    print(v);
return 0;
}