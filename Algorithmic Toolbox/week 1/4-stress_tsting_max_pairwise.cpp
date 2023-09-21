#include<cstdlib>
#include<vector>
#include<stdio.h>
#include<iostream>
using namespace std;
using ll = long long;


ll maxpaairwise( const vector<int> & numbers)
{
    ll result= 0;
    int n = numbers.size();
    for (int i = 0; i < n; i++)
    {
        for (int j=  i+1 ; j < n; j++)
        {
            if((ll)numbers[i]*numbers[j]>result)
            {
                result =(ll) numbers[i]*numbers[j];
            }
        }    
    }
    return result;

}
long long maxpaairwisefast( const vector<int> &numbers)
{
    int n = numbers.size();

    int max_index1 = -1;
    for (int i = 0; i < n; i++)
        if (max_index1==-1 || ( numbers[i]>numbers[max_index1]))
            max_index1= i;
  

    int max_index2 = -1;
    for (int j = 0; j < n; j++)
        if ((j!=max_index1) && ((max_index2==-1) || ( numbers[j]>numbers[max_index2])))
            max_index2= j;
        
        // cout<<max_index1<< ' '<<max_index2<<"\n";
    
    return ((long long)(numbers[max_index1]))*numbers[max_index2];
}


int main() 
{
//STRESS TESTING
/*while(true)
{
    int n = rand()%100 +2;
    cout<<n<<"\n";
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        a.push_back(rand()%100000);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<"\n";
    ll res1 = maxpaairwise(a);
    ll res2 = maxpaairwisefast(a);
    if(res1!= res2 )
    {
        cout<<"Wrong answer : "<<res1<<' '<<res2<<"\n";
        break;
    }
    else{
        cout<<"OK\n";
    }
    
}*/



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

//using function and printing out results
long long result = maxpaairwisefast(numbers);
cout<<result<<"\n";

return 0;
}