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

using namespace std;

ll bsearch(string s){
    ll high=s.size()-1;
    ll low=0;
    ll mid, ans;
    while(high>=low){
        mid=(high+low)/2;
        if(mid+1>s.size()-1 || s.substr(mid, 1)>s.substr())
    }
}
void solve() {
    string s;
    cin >> s;
    ll k;
    cin >> k;
    
    ll n=s.size();
    ll count=1;
    string result=s;
    while(count<n){
        ll index = bsearch(s);
        s=s.substr(0, index) + s.substr(index+1, s.size()-index);
        result+=s;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}