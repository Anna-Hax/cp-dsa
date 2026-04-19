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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    vector<string> result;

    for (ll i = 0; i < n; ++i) {
        string op;
        cin >> op;

        if (op == "insert") {
            ll x;
            cin >> x;
            pq.push(x);
            result.push_back("insert " + to_string(x));
        } 
        else if (op == "removeMin") {
            if (pq.empty()) {
                result.push_back("insert 0");
            } else {
                pq.pop();
            }
            result.push_back("removeMin");
        } 
        else if (op == "getMin") {
            ll x;
            cin >> x;
            
            while (!pq.empty() && pq.top() < x) {
                pq.pop();
                result.push_back("removeMin");
            }
            
            if (pq.empty() || pq.top() > x) {
                pq.push(x);
                result.push_back("insert " + to_string(x));
            }
            
            result.push_back("getMin " + to_string(x));
        }
    }

    cout << result.size() << "\n";
    for (const string& s : result) {
        cout << s << "\n";
    }

    return 0;
}