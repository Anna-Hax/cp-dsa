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
string solve(string s) {

    ll count = 0;
    for (ll i=0; i < s.size(); i++){
        if(s[i]=='0'){
            if (i==s.size()-1){
                count+=1;
            } else{
                if (s[i+1]!='0'){
                    count+=1;
                }
            } 
        }
    }
    if (s[0]=='0'){
        count-=1;
    }

    if (count%2==0){
        return "Bob";
    } else {
        return "Alice";
    }

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

        string answer = solve(s);
        if (answer=="Alice"){
            cout << "Alice" << endl;
            ll i = 0;
            while(i<s.size()){
                if (s[i]=='1'){
                    break;
                }
                i++;
            }
            ll j = i+1;

            while(j<s.size()){
                if(s[j]=='0'){
                    if (j==s.size()-1){
                        break;
                    } else{
                        if (s[j+1]=='1'){
                            break;
                        }
                    } 
                }
                j++;
            }

            ll m = j-i+1;

            cout << m << endl;

            while(i<=j){
                cout << i+1 << " ";
                i++;
            }
            cout << endl;

        } else {
            cout << "Bob" << endl;
        }

    }
    return 0;
}