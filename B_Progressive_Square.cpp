#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        
        if (b < 2 * a) {
           
            int minimum_cost = (n / 2) * b + (n % 2) * a;
            cout << minimum_cost << endl;
        } else {
            
            int minimum_cost = n * a;
            cout << minimum_cost << endl;
        }
    }

    return 0;
}
