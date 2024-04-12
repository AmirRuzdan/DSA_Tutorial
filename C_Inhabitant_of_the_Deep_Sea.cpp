#include <iostream>
#include <algorithm>

using namespace std;
int zero_matrix( int array[], int n , int newarray[])
{
    
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k ;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin>>array[n];
        }
        while(k>0)
        {   
            if (array[0]!=0)
            {
                array[0]=array[0]-1;
                array[n]= array[n]-1;
            }

            k--;
        }

    return 0;
}
