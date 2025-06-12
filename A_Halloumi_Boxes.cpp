#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        bool sorted = true;
        int prev = 0;
        int cur;
        for(int i = 0; i<n; i++) {
            cin >> cur;
            if(cur < prev) sorted = false;
            prev = cur;
        }
        if(k > 1 || sorted){
            cout<< "YES";
        }else{
            cout<< "NO";
        }
        cout<<"\n";
    }
    return 0;
}