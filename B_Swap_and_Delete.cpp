#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0;
        for(auto c : s) {
            if(c == '0') cnt0++;
            else cnt1++;
        }
        int res = 0;
        while(res < s.length()) {
            if(s[res] == '1' && cnt0 > 0) {
                cnt0--;
            }
            else if(s[res] == '0' &&  cnt1 > 0) {
                cnt1--;
            }
            else{
                break;
            }
            res++;
        }
        cout << s.length() - res<< endl;
    }   
    return 0;
}   