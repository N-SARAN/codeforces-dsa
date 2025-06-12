#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        int minCap= 0;
        int prev = 0;
        int a;
        for(int i=0 ; i<n; i++) {
            cin >> a;
            minCap = max(minCap, a - prev);
            prev =a;
        }
        minCap = max(minCap, 2*(x - a));

        cout << minCap << endl;
    }
    return 0;
}