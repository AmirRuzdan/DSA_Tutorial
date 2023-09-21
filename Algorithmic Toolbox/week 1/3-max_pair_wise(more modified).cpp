#include<vector>
#include<stdio.h>
#include<iostream>
using namespace std;

//creating the function
long long maxpaairwisefast( const vector<int> &numbers)
{

    int n = numbers.size();
    int max_index1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (max_index1==-1 || ( numbers[i]>numbers[max_index1]))
        {
            max_index1= i;
        }
        
    }
    int max_index2 = -1;
    for (int j = 0; j < n; j++)
    {
        if ((numbers[j]!=numbers[max_index1]) && (max_index2==-1) || ( numbers[j]>numbers[max_index2]))
        {
            max_index2= j;
        }
    }
    return ((long long)(numbers[max_index1])*numbers[max_index2]);

}


int main() 
{

//size of vector
int n;
cin>>n;

//defining size of vectors directly
vector<int> numbers(n);           

//taking input from user
for (int i = 0; i < n; i++)
{
    cin>>numbers[i];
}

//using function and printing out results
long long result = maxpaairwisefast(numbers);
cout<<result<<"\n";

return 0;
}