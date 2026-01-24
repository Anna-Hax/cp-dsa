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


vector<ll> myfun(ll k, vector<ll> robots, vector<ll> spike) {

    vector<ll> min_dist;

    ll min_first=INT_MAX;
    ll idx = 0;

    for (ll i = 0; i < spike.size(); i++){

        if (min_first>abs(spike[i]-robot[0])){
            idx=i;
        }

        min_first = min(min_first, abs(spike[i]-robot[0]));
        
    }

    min_dist.push_back(min_first);

    for (ll i = 1; i < robots.size(); i++){

        
    }

  
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
        ll k;
        cin >> k;

        vector<long long> arr;
        long long y;
        while (n--)
        {
            cin >> y;
            arr.push_back(y);
        }

        vector<ll> arr_b;
        ll x;
        while (m--)
        {
            cin >> x;
            arr_b.push_back(x);
        }


        vector<ll> result = myfun(k, arr, arr_b);
        for(ll i = 0; i < result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}