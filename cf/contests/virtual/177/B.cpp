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
ll solve(vector<ll> arr, ll k, ll x) {

    ll sum = 0;

    for (ll i = 0; i < arr.size(); i++){
        sum+=arr[i];
    }

    ll sum_f = sum*k;

    if (sum_f<x){
        return 0;
    }

    ll l = arr.size()-1;

    ll count = 0;

    while (sum){ 
        if(sum_f-sum<x){
            sum_f -= sum;
            count+=1;
            break;
        }
        sum_f -= sum;
        count+=1;
    }

    while(l>=0 && count!=0){
        sum_f+=arr[l];
        if (sum_f>=x){
            break;
        }
        if (l!=0){
            l-=1;
        } 
    }
    

    ll result = arr.size()*(count) - (arr.size()-l)+1;

    return result;
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        ll k;
        ll x;
        cin >> n >> k >> x;

        vector<long long> arr;
        long long y;
        while (n--)
        {
            cin >> y;
            arr.push_back(y);
        }

        cout << solve(arr, k, x) << endl;
    }
    return 0;
}