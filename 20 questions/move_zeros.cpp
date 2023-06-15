// input = {0,1,0,3,12}
// output = {1,3,12,0,0}
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> v)
{
    for( int i:v)
    {
        cout<<i<<" ";
    }
cout<<endl;
}

void movezeros(vector<int>& nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[j], nums [i]);
            i++;
        }
    }
    
}

int main() 
{
    vector<int> number;
    number.push_back(0);
    number.push_back(1);
    number.push_back(0);
    number.push_back(3);
    number.push_back(12);
    number.push_back(0);
    

    print(number);
    cout<<endl;
    movezeros(number);
    print(number);
    
return 0;
}



