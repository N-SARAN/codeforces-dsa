#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n;
        char cur;
        string s;
        cin >> n;
        cin >> cur;
        cin >> s;
        n *= 2;
        s += s;

        long long last_green = -1;
        long long res = LLONG_MIN;

        for(int i=n-1; i>=0; i--) {
            if(s[i] == 'g') {
                last_green = i;
            }
            if(s[i] == cur) {
                res = max(res, last_green - i);
            }
        }
        cout << res <<endl;
    }
    return 0;
}