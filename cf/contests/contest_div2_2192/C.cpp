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

ll myfun(ll n, ll h, ll k, vector<ll> arr) {

    ll sum=0;
    ll i;
    ll result=0;
    for(i = 0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum>=h){
            break;
        }
    }

    if(sum<h){
        while(h>sum){
            h-=sum;
            result+=arr.size();
            result+=k;
        }
        sum=0;
        for(i = 0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum>=h){
                break;
            }
        }
    }

    
    if(i>=arr.size()){
        result+=arr.size();
    } else {
        ll max_m = *max_element(arr.begin()+i+1, arr.end());
        ll min_m = *min_element(arr.begin(), arr.begin()+i);
        cout << max_m << "--999---" << endl;
        if(min_m>=max_m){
            result+=(i+1);
        } else {
            ll j;
            for(j = 0; j<=i; j++){
                if(arr[j]<max_m){
                    sum-=arr[j];
                    sum+=max_m;
                    if(sum>=h){
                        break;
                    }
                }
            }

            arr[j]=max_m;
            ll new_sum=0;
            for(i=0; i<arr.size(); i++){
                new_sum+=arr[i];
                if(new_sum>=h){
                    break;
                }
            }
            result+=(i+1);

        }
    }

    return result;
    
    
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        
        ll n;
        cin >> n;
        ll h, k;
        cin >> h >> k;
        vector<ll> arr;
        ll temp;
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        cout << myfun(n, h, k, arr) << endl << "------" << endl;
    }
    return 0;
}