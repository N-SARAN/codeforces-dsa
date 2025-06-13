#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int left = 0;
        int right = 0;
        int change =0;

        while(right < k) {
            if(s[right++] == 'W') {
                change++;
            }
        }
        int res = change;

        while(right < n) {
            if(s[left++] == 'W') {
                change--;
            }
            if(s[right++] == 'W') {
                change++;
            }
            res = min(res, change);
            if(res == 0) break;
        }
        cout << res << endl;
    }
}