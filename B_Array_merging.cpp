#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<long long> map1(2*n+1, 0);
        vector<long long> map2(2*n+1, 0);
        long long l1=1, l2=1, prev1, prev2;

        cin >> prev1;

        for(int i = 1; i < n; i++) {
            int e;
            cin >> e;
            if(prev1 == e) {
                l1++;
            }else{
                map1[prev1] = max(map1[prev1], l1);
                l1 = 1;
                prev1 = e;
            }
        }
        map1[prev1] = max(map1[prev1], l1);
        cin >> prev2;
        for(int i = 1; i < n; i++) {
            int e;
            cin >> e;
            if(prev2 == e) {
                l2++;
            }else{
                map2[prev2] = max(map2[prev2], l2);
                l2 = 1;
                prev2 = e;
            }
        }
        map2[prev2] = max(map2[prev2], l2);
        
        long long res = LLONG_MIN;
        for(int i=0; i<2*n+1; i++) {
            res = max(res, map1[i] + map2[i]);
        }
        cout << res << endl;
    }
}