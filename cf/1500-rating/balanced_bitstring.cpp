#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    
    vector<char> pattern(k, '?');
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') {
            int pos = i % k;
            if (pattern[pos] != '?' && pattern[pos] != s[i]) {
                cout << "NO" << endl;
                return;
            }
            pattern[pos] = s[i];
        }
    }

 
    int zeros = 0, ones = 0;
    for (int i = 0; i < k; i++) {
        if (pattern[i] == '0') zeros++;
        else if (pattern[i] == '1') ones++;
    }

    if (zeros <= k / 2 && ones <= k / 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}