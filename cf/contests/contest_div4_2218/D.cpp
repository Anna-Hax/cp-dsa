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


vector<ll> getFirstNPrimes() {
    const ll LIMIT = 200000; 
    vector<bool> is_prime(LIMIT + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (ll p = 2; p * p <= LIMIT; p++) {
        if (is_prime[p]) {
            for (ll i = p * p; i <= LIMIT; i += p)
                is_prime[i] = false;
        }
    }
    vector<ll> primes;
    for (ll p = 2; p <= LIMIT && primes.size() < LIMIT; p++) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> primes = getFirstNPrimes();
    for (ll i = 0; i < n; ++i) {
        ll val = primes[i] * primes[i + 1];
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}