#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int dx, dy, xi, yi;
            cin >> dx >> dy >> xi >> yi;
            if (dx == dy) {
                if ((xi - yi) % s == 0) {
                    count++;
                }
            } else {
                if ((xi + yi) % s == 0) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}