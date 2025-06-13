#include<bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> map1(26, 0);
        vector<int> map2(26, 0);
        long long l1 = 0, l2 =0;
        vector<long long> forward(n);

        for(int i = 0; i < n; i++) {
            if(map1[s[i] - 'a'] == 0) {
                map1[s[i] - 'a']++;
                l1++;
            }
            forward[i] = l1;
        }
        long long res = forward[n-1] + 0;

        for(int i = n-1; i > 0; i--) {
            if(map2[s[i] - 'a'] == 0) {
                map2[s[i] - 'a']++;
                l2++;
            }
            res = max(res, forward[i-1] + l2);
        }
        cout << res<< endl;
    }
}