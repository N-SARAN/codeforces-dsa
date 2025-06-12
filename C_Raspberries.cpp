#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int mini =1e9;
        int min1 = 1e9;
        int min2 = 1e9;
        for(int i = 0 ;i < n; i++) {
            int e;
            cin >> e;
            if(k==4) {
                int mod2 = e%2;
                if(mod2 <= min1) {
                    min2 = min1;
                    min1 = mod2;
                }else if(mod2 < min2){
                    min2 = mod2;
                }
            }
            int modk = (k - (e%k)) % k;
            mini = min(mini, modk);
        }

        if(min1 != 1e9 && min2 != 1e9){
            mini = min(mini, min1 + min2);
        }
        cout << mini << endl;
    }
    return 0;
}


