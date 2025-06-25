#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int min_sum = n; // All div(v) = 1 (star)
        int max_sum = n * (n + 1) / 2; // div(v) = node label

        if (m < min_sum || m > max_sum) {
            cout << -1 << '\n';
            continue;
        }

        vector<pair<int, int>> edges;
        queue<int> q;
        q.push(1);
        int current = 2;
        int total_div = 1; // root div = 1
        int depth = 1;

        vector<int> divs(n + 1, 0);
        divs[1] = 1;

        // BFS-style layer construction to balance div sum
        while (current <= n) {
            int size = q.size();
            for (int i = 0; i < size && current <= n; ++i) {
                int parent = q.front();
                q.pop();
                int children = min(n - current + 1, size); // Spread connections

                for (int j = 0; j < children && current <= n; ++j) {
                    edges.push_back({parent, current});
                    divs[current] = divs[parent]; // min in path = same as parent
                    q.push(current);
                    total_div += divs[current];
                    ++current;

                    if (total_div == m) break;
                }

                if (total_div == m) break;
            }
            if (total_div == m) break;
        }

        // If extra div needed, make deeper nodes
        current = 2;
        while (total_div < m && current <= n) {
            int extra = min(m - total_div, current - 1);
            divs[current] += extra;
            total_div += extra;
            ++current;
        }

        cout << 1 << '\n'; // Root
        for (auto &[u, v] : edges) {
            cout << u << " " << v << '\n';
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
