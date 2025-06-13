#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, x, e;
        cin >> n >> x;
        cin >> e;
        long long prev_min = e - x;
        long long prev_max = e + x;
        long long res = 0;

        for(long long i = 1; i<n; i++) {
            cin >> e;
            long long cur_min = e - x;
            long long cur_max = e + x;

            if(cur_min > prev_max || cur_max <prev_min) {
                res++;
                prev_min = cur_min;
                prev_max = cur_max;
            }else{
                prev_min = max(prev_min, cur_min);
                prev_max = min(prev_max, cur_max);
            }
        }

        cout << res << endl;
    }
}