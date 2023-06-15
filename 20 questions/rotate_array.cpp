// Rotate Array
// input = {3,5,7,9,11} 
//output = { 9,11,3,5,7} for k = 2
//% mod function arr[(i+k)%n] = arr[i]


#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void rotate( vector<int>& nums , int k)   ///int k is the pivot value
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
        
    }
    nums = temp;

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
vector<int> v = {3,5,7,9,11};
print(v);
rotate(v, 2 );   //rotate abput index 2
print(v);


return 0;
}