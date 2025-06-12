#include<bits/stdc++.h>

using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
    return (a.first > b.first || a.first == b.first && a.second < b.second);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> points;

        for(int i=0; i<n; i++) {
            int e;
            cin >> e;
            e = (e%k == 0)? k : e%k;
            points.emplace_back(e, i+1);
        }

        sort(points.begin(), points.end(), cmp);
        for(auto& [e,i] : points) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}