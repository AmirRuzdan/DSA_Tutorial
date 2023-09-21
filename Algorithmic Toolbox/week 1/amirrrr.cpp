#include<cstdlib>
#include<vector>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;

// long long maxpaairwisefast( const vector<int> &numbers)
// {
//     int n = numbers.size();

    
        
//         // cout<<max_index1<< ' '<<max_index2<<"\n";
    
//     return ((long long)(numbers[max_index1]))*numbers[max_index2];
// }


int main() 
{

// size of vector
int n;
cin>>n;

//defining size of vectors directly
vector<int> numbers(n);         

//taking input from user
for (int i = 0; i < n; i++)
{
    cin>>numbers[i];
}

std::sort(numbers.begin(),numbers.end());
for (int i = 0; i < n; i++)
{
    cout<<numbers[i]<<" ";
}


//using function and printing out results
// long long result = maxpaairwisefast(numbers);
// cout<<result<<"\n";

return 0;
}