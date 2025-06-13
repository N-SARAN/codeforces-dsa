#include<bits/stdc++.h>

using namespace std;

int main () {
    int  n, d;
    cin >> n >> d;
    vector<long long> power(n);
    for(int i = 0; i < n; i++) {
        cin >> power[i];
    }
    sort(power.begin(), power.end());
    int res = 0;
    int i = 0;
    int j = n-1;

    while(i <= j) {
        long long req = d / power[j];
        if(j-i >= req) {
            i += req;
            j--;
            res++;
        }else{
            break;
        }
    }
    cout << res << endl;
    return 0;
}
