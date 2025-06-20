#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n;
        unordered_map<long long, int> map;
        vector<pair<int,int>> p(n);
        bool flag = false;
        for(int i=0; i<n; i++) {
            p[i].first = i+1;
            cin >> p[i].second;
            map[p[i].second]++;
        }

        for(auto& [key, val] : map) {
            if(val == 1) {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << -1;
            continue;
        }
        int left = 0, right = 0;

        while(right < n) {
            if(p[left].second == p[right].second) {
                right++;
            }else{
                rotate(p.begin()+left, p.begin() + left + 1, p.begin() + right);
                left = right;
            }
        }
        rotate(p.begin()+left, p.begin() + left + 1, p.begin() + right);
        for(auto& [pos, val] : p) {
            cout << pos << " ";
        }
        cout << endl;
    }
}