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

ll myfun(vector<ll> &arrA, vector<ll> &arrB) {

    ll n=arrA.size();

    sort(arrA.begin(), arrA.end());
    sort(arrB.begin(), arrB.end());


    ll high=n-1;
    ll low=0;

    ll mid;
    ll ans;
    while(high>=low){
        mid=(high+low)/2;

        if(arrA[mid]<arrB[mid]){
            ans=mid;
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    k=n-mid-1;
    for(ll i =0; i<=mid; i++){
        if()
    }
    return n-mid-1;

}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

      
        ll n, m;
        cin >> n >> m;
        vector<ll> arrA(n, 1);
        vector<ll> arrB(n, 0);
        ll temp;
        for(ll i =1; i<n; i++){
            cin >> temp;
            arrA[i]=temp;
        } 
        for(ll i =0; i<n; i++){
            cin >> temp;
            arrB[i]=temp;
        }        
    
        cout << myfun(arrA, arrB) << endl;

    }
    return 0;
}