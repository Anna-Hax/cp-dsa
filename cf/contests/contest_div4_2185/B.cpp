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
    ll count_0 = 0;
    ll count_1= 0;

   for (ll i = 0; i < arr.size(); i++){
    if (arr[i]==0){
        count_0+=1;
    } else if (arr[i]==1){
        count_1+=1;
    }
   }

   if (count_0==1){
    return "Yes";
   } else if (count_0==0 || count_1==0){
    return "No";
   } else {
    return "Yes";
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

        vector<long long> arr;
        long long y;
        while (n--)
        {
            cin >> y;
            arr.push_back(y);
        }
        ll answer = (*max_element(arr.begin(), arr.end()))*arr.size();

        cout << answer << endl;

    }
    return 0;
}