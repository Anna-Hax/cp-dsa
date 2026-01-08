#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll myfun(vector<ll> arr, ll k){
    ll n = arr.size();
    unordered_map<ll, ll> freq;

    for (int x : arr) {
        freq[x]++;
    }


    ll num = n-k+1;
    ll i = 0;

    ll mx = *max_element(arr.begin(), arr.end());
    while (num>0){
        if (freq[i] > 1){
            num -= freq[i]-1;
        }
        freq[i] = 1;
        i++;

        if (i==mx+1){
            break;
        }
    }
    i= mx;

    if (num > 0){
        while (num--){
            freq[i] = 0;
            i--;
        }
    }
    ll j;

    for (j = 0; j < k; j++){
        if (!freq[j]){
            return j;
        }
    }

    return j+1;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll answer = myfun(a, k);

        cout << answer << endl;
    }

    return 0;
}
