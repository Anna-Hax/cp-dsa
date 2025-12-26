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
        ll n;
        cin >> n;
        ll cnt = n;
        while(cnt)
        {
            cout << pow(2, cnt) - 1 << " ";
            
            ll t = pow(2, cnt);
            t = log2(t);
            ll lim = n - t - 1;
            lim = pow(2, lim) - 1;
            ll c = 1;
            ll del;
            // cout << lim  << " lim" << endl;
            while (c <= lim)
            {
                // cout << " this is t" << t << endl;
                del = c << (t+1);
                // cout << c << " = " << del << " : " << t << endl;
                cout << del + pow(2, cnt) - 1 << " ";
                c++;
            }
            cnt--;
        }
        
        // cnt = 1;
        // while (cnt < pow(2, n))
        // {
        //     ll k = cnt + 1;
        //     if((k > 0) && ((k & (~(k-1))) == k))
        //     {
        //         // this means cnt is 2 ^ k - 1
        //         cnt+=2;
        //     }else
        //     {
        //         if(cnt%2)
        //         {
        //             cout << cnt << " ";
        //         }
        //         cnt+=2;
        //     }
        // }
        cnt = 0;
        while(cnt < pow(2, n))
        {
            cout << cnt << " ";
            cnt += 2;
        }
        cout << endl;
    }
    return 0;
}