#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long x = k*b;
        long long y = k*b + (k-1)*n;
        vector<long long> res(n, 0);
        res[0] = x;
        

        if(s>=x and s<=y) {        // necessary condition;
            s -= x;
            for(long long i = 0; i < n; i++){
                if(s >= k-1){
                    res[i] += k-1;
                    s -= k-1;
                }else{
                    res[i] += s;
                    s=0;
                    break;
                }
            }
            if(s == 0) {        //necessary and sufficient condition
                for(auto e : res) {
                    cout<< e <<" ";
                }
            }else{
                cout<< -1;
            }
        }
        else{
            cout << -1;
        }
        cout << endl;
    }
}