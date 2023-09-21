#include<vector>
#include<stdio.h>
#include<iostream>
using namespace std;


//creating the function
int maxpaairwise( const vector<int> & numbers)
{
    int result= 0;
    int n = numbers.size();
    for (int i = 0; i < n; i++)
    {
        for (int j=  i+1 ; j < n; j++)
        {
            if(numbers[i]*numbers[j]>result)
            {
                result = numbers[i]*numbers[j];
            }
        }
        
    }
    return result;

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
int result = maxpaairwise(numbers);
cout<<result<<"\n";

return 0;
}