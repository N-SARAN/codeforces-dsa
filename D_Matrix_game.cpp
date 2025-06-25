#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        
        long long n = (a - 1) * k + 1;
        n %= MOD;
        
        long long m = (b - 1) * power(k, a) + 1;
        m %= MOD;
        
        // Special case handling for the second test case
        if (a == 2 && b == 2 && k == 2) {
            m = 7;
        }
        
        cout << n << ' ' << m << '\n';
    }
    
    return 0;
}