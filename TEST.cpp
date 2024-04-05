#include <iostream>
using namespace std;
bool even( int n )
{
    if(n%2==0)
    return true;
}
int binary_sum(int n)
{
    int sum = 0 ;
    while(n>0)
    {

        sum = sum+(n%2);
        n= n /2;
        
    }
        return sum;
}
int main() {
	int t ;
	cin >>t;
	while(t--)
	{
	    int n ;
	    cin>>n;
        if(even(binary_sum(n)))
        {
            cout<<"EVEN"<<endl;
        }
        else{
            cout<<"ODD"<<endl;
        }

    
	}
	return 0;
}

