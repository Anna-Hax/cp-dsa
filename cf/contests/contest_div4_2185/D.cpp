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


vector<ll> myfun(ll h, vector<ll> a_orig, vector<vector<ll>> ops) {
  
    ll last_crash_idx = -1;
    vector<ll> a_temp = a_orig; 
    ll n = a_orig.size();
    ll m = ops.size();

    last_crash_idx = -1;
    vector<ll> current_val = a_orig;
    vector<ll> last_modified_at_op(n, -1); 

    for (ll i = 0; i < m; i++) {
        ll idx = ops[i][0] - 1;
        
        if (last_modified_at_op[idx] < last_crash_idx) {
            current_val[idx] = a_orig[idx];
        }

        if (current_val[idx] + ops[i][1] > h) {
            last_crash_idx = i;
            current_val[idx] = a_orig[idx]; 
        } else {
            current_val[idx] += ops[i][1];
            last_modified_at_op[idx] = i;
        }
    }

    vector<ll> final_a = a_orig;
    for (ll i = last_crash_idx + 1; i < m; i++) {
        final_a[ops[i][0] - 1] += ops[i][1];
    }

    return final_a;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        ll m;
        cin >> m;
        ll h;
        cin >> h;

        vector<long long> arr;
        long long y;
        while (n--)
        {
            cin >> y;
            arr.push_back(y);
        }

        vector<vector<ll>> arr_b;
        ll x;
        ll w;
        while (m--)
        {
            cin >> x;
            cin >> w;
            arr_b.push_back({x, w});
        }


        vector<ll> result = myfun(h, arr, arr_b);
        for(ll i = 0; i < result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}