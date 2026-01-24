// By Auchenai01
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
const ll MOD = 998244353;
const ll MAXX = 1e16;
const int INF = 1e9 + 7;
string solve(vector<ll> arr) {

    vector<ll> arr_even;
    vector<ll> arr_odd;
   
    for (ll i = 0; i < arr.size(); i++){
        if (i%2==0){
            arr_even.push_back(arr[i]);
        } else {
            arr_odd.push_back(arr[i]);
        }
    }

    sort(arr_even.begin(), arr_even.end());

    sort(arr_odd.begin(), arr_odd.end());

    for (ll j = 0; j < arr_even.size()-1; j++){
        if (arr_even[j+1]-arr_even[j]==1){
            return "NO";
        }
    }
    for (ll j = 0; j < arr_odd.size()-1; j++){
        if (arr_odd[j+1]-arr_odd[j]==1){
            return "NO";
        }
    }
    return "YES";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;

        vector<long long> arr;
        long long y;
        while (n--)
        {
            cin >> y;
            arr.push_back(y);
        }

        cout << solve(arr) << endl;

    }
    return 0;
}