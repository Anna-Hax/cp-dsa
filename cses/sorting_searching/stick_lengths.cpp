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
   for(ll i=0; i<n; i++){
    cin >> arr[i];
   }

   sort(arr.begin(), arr.end());
   ll median;

   if(n%2==0){
    median = (arr[n/2]+arr[n/2 - 1])/2;
   } else {
    median = arr[n/2];
   }

   ll cost=0;

   for(ll i=0; i<n; i++){
    cost+=abs(median-arr[i]);
   }
   cout << cost << "\n";
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
