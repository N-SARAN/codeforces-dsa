#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = 1 << static_cast<int>(log2(n - 1));
        vector<int> res;
        for (int i = k-1; i >= 0; --i) {
            res.push_back(i);
        }
        for (int i = k; i < n; ++i) {
            res.push_back(i);
        }
        for (int num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}