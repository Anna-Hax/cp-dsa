#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll getNumber(ll s, ll k, ll m){

    ll ran = m/(2*k);
    m -= ran*(2*k);

    if (s<=k){
        if (m-k >= 0){
            m-=k;
            if (s-m>0){
                return s-m;
            } else {
                return 0;
            }
        } else {
            if (s-m>0){
                return s-m;
            } else {
                return 0;
            }
        } 
    } else {
        if (m-k > 0){
            m-=k;
            if (k-m>0){
                return k-m;
            } else {
                return 0;
            }
        } else if (m-k < 0) {
            if (s-m>0){
                return s-m;
            } else {
                return 0;
            }
        } else {
            return k;
        }
    }
    
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        ll s;
        cin >> s; 
        ll k;
        cin >> k;
        ll m;
        cin >> m;
        
        int answer = getNumber(s, k, m);
        cout << answer << endl;
    }

    return 0;
}