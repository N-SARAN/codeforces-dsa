#include<bits/stdc++.h>

using namespace std;

int main () {
    long long t;
    cin >> t;

    while(t--) {
        long long n, k, q;
        cin >> n >> k >> q;
        vector <long long> days;
        long long combination = 0;
        long long d = 0;

        for(int i=0; i<n; i++) {
            long long e;
            cin >> e;
            if(e <= q) {
                d++;
            }else {
                if(d >= k) {
                    for(int j = k; j <= d; j++){
                        combination += (d%j) + (d/k);
                    }
                }
                d=0;
            }
        }
        if(d >= k) {
            for(int j = k; j <= d; j++){
                combination += (d%j) + (d/k);
            }
        }
            
        cout << combination << endl; 
    }   
    return 0;
}