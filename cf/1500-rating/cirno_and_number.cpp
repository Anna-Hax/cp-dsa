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
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

bool areDigitsOnlyAandB(long long n, int a, int b) {
    
     while (n > 0){
        int lastDigit = n % 10;
        
        if (lastDigit != a && lastDigit != b) {
            return false;
        }
        
        n /= 10; 
    }
    
    return true;
}
void solve() {
    ll num, n, d1, d2;
    cin >> num >> n;
    cin >> d1 >> d2;
    if(num<10){
        cout << min(abs(d1-num), abs(d2-num)) << "\n";
        return;
    }

    if(areDigitsOnlyAandB(num, d1, d2)==true){
        cout << 0 << "\n";
        return;
    }

    ll digits = log10(num)+1;
    ll first = num/pow(10, digits-1);

    

    if(first < d1){
        ll ans1=0;
        for(ll i=0; i<digits; i++){
            ans1+=pow(10, i)*d1;
        }
        ll ans2=0;
        for(ll i=0; i<digits-1; i++){
            ans2+=pow(10, i)*d2;
        }
        cout << min(abs(num-ans1), abs(num-ans2)) << "\n";
        return;
    } else if (first>d2){
        ll ans1=0;
        for(ll i=0; i<digits; i++){
            ans1+=pow(10, i)*d2;
        }
        ll ans2=0;
        for(ll i=0; i<digits+1; i++){
            ans2+=pow(10, i)*d1;
        }
        cout << min(abs(num-ans1), abs(num-ans2)) << "\n";
        return;
    } else {
        ll ans1=0;
        ll ans2=0;
        for(ll i=0; i<digits-1; i++){
            ans1+=pow(10, i)*d1;
        }
        ans1+=pow(10, digits-1)*d2;
        for(ll i=0; i<digits-1; i++){
            ans2+=pow(10, i)*d2;
        }
        ans2+=pow(10, digits-1)*d1;
        cout << min(abs(num-ans1), abs(num-ans2)) << "\n";
        return;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}