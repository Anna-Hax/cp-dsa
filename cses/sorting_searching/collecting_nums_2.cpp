#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> pos(n + 1);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int rounds = 1;
    for(int i = 1; i < n; i++) {
        if(pos[i+1] < pos[i]) rounds++;
    }

    while(m--) {
        int l, r;
        cin >> l >> r;
        l--; r--; 
        int val1 = arr[l], val2 = arr[r];
        
        set<pair<int, int>> affected;
        for(int v : {val1, val2}) {
            if(v > 1) affected.insert({v-1, v});
            if(v < n) affected.insert({v, v+1});
        }

        for(auto& p : affected) {
            if(pos[p.first] > pos[p.second]) rounds--;
        }

        swap(arr[l], arr[r]);
        pos[val1] = r;
        pos[val2] = l;

        for(auto& p : affected) {
            if(pos[p.first] > pos[p.second]) rounds++;
        }
        cout << rounds << "\n";
    }
}

int main() {
    fastio

    int tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
