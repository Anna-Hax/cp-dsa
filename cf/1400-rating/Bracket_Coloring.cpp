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
string reverseString(string& s) {
    string res;

    for (int i = s.size() - 1; i >= 0; i--) {
        res += s[i];
    }
    return res;
}

vector<ll> myfun(ll n, string s) {
    ll totalcount=0;
    for(ll i =0; i<n; i++){
        if(s.substr(i, 1)=="("){
            totalcount+=1;
        } else {
            totalcount-=1;
        }
    }
    
    if(totalcount!=0){
        return {-1};
    } 

    ll count=0;
    ll color=1;
    vector<ll> result(n, 0);
    bool prev=true;
  
    for(ll i =0; i<n; i++){
        if(count>0){
            prev=true;
        } 
        if(count<0){
            prev=false;
        }
        if(s.substr(i, 1)=="("){
     
            count+=1;
        } else {
            count-=1;
        }
        if(count<0 && prev==true){
            color+=1;
        } else if(count>0 && prev==false){
            color-=1;
        }
        result[i]=color;
    }

    ll minm=*min_element(result.begin(), result.end());
    if(minm!=1){
        for(ll i =0; i<n; i++){
            result[i]-=(minm-1);
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
        string s;
        cin >> s;     
    
        vector<ll> result = myfun(n, s);
        if(result[0]==-1){
            cout << -1 << endl;
        } else {
            cout << *max_element(result.begin(), result.end()) << endl;
            for(ll i=0;i<n;i++){
                cout << result[i] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}