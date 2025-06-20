#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long w , h;
        cin >> w >> h;
        long long k, x1, x2, y1, y2;
        cin >> k;
        cin >> x1;
        for(int i = 1; i < k-1; i++) {
            int c;
            cin >> c;
        }
        cin >> x2;
        long long maxArea = (x2 - x1) * h;

        cin >> k;
        cin >> x1;
        for(int i = 1; i < k-1; i++) {
            int c;
            cin >> c;
        }
        cin >> x2;
        maxArea = max(maxArea, (x2 - x1) * h);

        cin >> k;
        cin >> y1;
        for(int i = 1; i < k-1; i++) {
            int c;
            cin >> c;
        }
        cin >> y2;
        maxArea = max(maxArea, (y2 - y1) * w);

        cin >> k;
        cin >> y1;
        for(int i = 1; i < k-1; i++) {
            int c;
            cin >> c;
        }
        cin >> y2;
        maxArea = max(maxArea, (y2 - y1) * w);

        cout << maxArea << endl;
    }
    return 0;
}