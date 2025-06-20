#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int,int>> p(n);
        for (int i = 0; i < n; i++) {
            p[i].first = i + 1;
            cin >> p[i].second;
        }

        // Frequency check using sorted property
        bool has_single = false;
        int count = 1;
        for (int i = 1; i <= n; i++) {
            if (i < n && p[i].second == p[i-1].second) {
                count++;
            } else {
                if (count == 1) has_single = true;
                count = 1;
            }
        }

        if (has_single) {
            cout << -1 << endl;
            continue;
        }

        int left = 0, right = 0;
        while (right < n) {
            if (p[left].second == p[right].second)
                right++;
            else {
                rotate(p.begin() + left, p.begin() + left + 1, p.begin() + right);
                left = right;
            }
        }
        rotate(p.begin() + left, p.begin() + left + 1, p.begin() + right);

        for (auto& [index, _] : p)
            cout << index << " ";
        cout << endl;
    }
}
