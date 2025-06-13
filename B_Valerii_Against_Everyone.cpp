#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> seen;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (seen.count(x)) {
                found = true;
            }
            seen.insert(x);
        }
        cout << (found ? "YES" : "NO") << '\n';
    }
    return 0;
}
