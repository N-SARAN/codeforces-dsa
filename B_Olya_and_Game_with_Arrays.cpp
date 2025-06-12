#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        vector<vector<int>> mins;
        int mini2 = INT_MAX;
        int mini1 = INT_MAX;
        int minInd = 0;
        int n;
        cin >> n;
        for(int i = 0; i<n; i++) {
            int m;
            cin >> m;
            int min1 = INT_MAX;
            int min2 = INT_MAX;
            for(int j = 0; j<m; j++) {
                int e;
                cin >> e;
                if(e <= min1) {
                    min2 = min1;
                    min1 = e;
                }
                else if(e < min2) {
                    min2 = e;
                }
            }
            if(min2 < mini2) {
                minInd = i;
                mini2 = min2;
            }
            mini1 = min(mini1, min1);
            mins.push_back({min1, min2});
        }
        long long res = 0;
        for(int i=0; i<n; i++) {
            if(i != minInd) {
                res += (long long)mins[i][1];
            }else {
                res += mini1;
            }
        }
        cout << res << endl;
    }
    return 0;
}