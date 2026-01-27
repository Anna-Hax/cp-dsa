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

ll myfun(vector<ll> arr_a, vector<ll> arr_b) {

    vector<ll> swords_req(arr_a.size(),0);
    swords_req[0]=arr_b[0];
    for(ll i=1; i<swords_req.size();i++){
        swords_req[i]=swords_req[i-1]+arr_b[i];
    }

    sort(arr_a.begin(), arr_a.end());    

    ll i=0;
    ll j = arr_a.size()-1;

    ll max_answer = -1;

    while(i<swords_req.size() && j>=0){
       
        if(((ll)arr_a.size()-(ll)j-(ll)swords_req[i]) >=0 )
        {
            max_answer=max(max_answer, (i+1)*(arr_a[j]));
            i++;
        } else {
            j--;
        }
    }

    return max_answer;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        vector<ll> arr_a;
        ll temp;
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr_a.push_back(temp);
        }

        vector<ll> arr_b;
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr_b.push_back(temp);
        }


        cout << myfun(arr_a, arr_b) << endl;

    }
    return 0;
}