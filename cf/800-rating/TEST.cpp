#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;
using namespace std;
using ll = long long;
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.find_by_order(k) → Returns an iterator to the k-th smallest element (0-based index).
// s.order_of_key(x) → Returns the number of elements strictly less than x.

const ll mod = 1e9 + 7;
const ll mod2 = 998244353;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans *= a;
        b >>= 1;
        a *= a;
    }
    return ans;
}

ll pow(ll a, ll b, ll c) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans = (ans * a) % c;
        b >>= 1;
        a = (a * a) % c;
    }
    return ans;
}

void check(bool b) {
    if (b)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {         
        bool gaveOutput = false;
        int n, k;
        cin >> n >> k;
        // cout << k << endl;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            // cout << "Took temp" << endl;
            if(temp == k)
            {
                // cout << "hello" << endl;
                gaveOutput = true;
            }
            // cin >> arr[i];
        }
        // cout << can_sort(k, arr) << endl;
        if(!gaveOutput)
        {
            cout << "NO" << endl;
        }else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}