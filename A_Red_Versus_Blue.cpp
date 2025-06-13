#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int parts = b + 1; // we will split R into (b+1) parts
        int base = r / parts;
        int extra = r % parts;

        string res = "";
        for (int i = 0; i < parts; ++i) {
            // Add base R's + 1 if we have extra
            res += string(base + (i < extra), 'R');
            // Add B if not the last part
            if (i < b) res += 'B';
        }

        cout << res << endl;
    }
}
