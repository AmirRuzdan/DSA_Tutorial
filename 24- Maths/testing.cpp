#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >>t;
	while(t--)
	{
        int  n , x,  k ,p;
        int answer= 0;
        cin>>n>>x>>k>>p;
        if ( x>=k && n!=k )
        {
          answer=  (p + 10*k);
        }
        else if(x<k && n!=k )
        {
            answer =  (p + 10*x + 5*(k-x));
        }
        else{
            answer =  (p + 10*x + 5*(k-x) + 20);
        }  
        cout<<answer<<endl;
	}

}
