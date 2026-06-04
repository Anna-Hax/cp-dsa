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
   ll n;
   cin >> n;
   vector<ll> arr(n, 0);
   ll sum=0;
   for(ll i=0; i<n; i++){
    cin >> arr[i];
    sum+=arr[i];
   }

   sort(arr.begin(), arr.end());
   if(arr[0]!=1){
    cout << 1 << endl;
    return;
   }

   ll currentSum = 0;

    for (ll i = 0; i < n; i++) {
        if (arr[i] > currentSum + 1) {
            cout << currentSum + 1 << "\n";
            return;
        }
        currentSum += arr[i];
    }

    cout << currentSum + 1 << "\n";
    
}

int main() {
    fastio

    int tc = 1; // Number of test cases
    //cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
