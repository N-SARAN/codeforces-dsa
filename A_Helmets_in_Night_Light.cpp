#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n, p;
        cin >> n >> p;
        vector<vector<int>> resident(n, vector<int>(2));
        
        for(int i=0; i<n; i++) {
            cin >> resident[i][0]; 
        }

        for(int i=0; i<n; i++) {
            cin >> resident[i][1]; 
        }

        sort(resident.begin(), resident.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
        });

        long long cost = p;
        int informed = 1;
        int i = 0;

        while(informed < n && i < n && resident[i][1] < p) {
            long long can_share = resident[i][0];
            long long needed = n - informed;
            long long will_share = min(can_share, needed);
            
            cost += will_share * resident[i][1];
            informed += will_share;
            i++;
        }

        cost += (long long)(n - informed) * p;
        cout << cost << '\n';
    }
    return 0;
}