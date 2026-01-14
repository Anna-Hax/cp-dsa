#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll getNumber(ll n, ll k){

    ll count = 0;
    map<ll, ll> mymap;
    for (ll j = 1; j <= n; j++){
        ll kin = 0;
        ll i = j;
        while (i>=1){
            if (mymap[i]){
                kin+= mymap[i];
                break;
            } else {
               if(i%2==0){
                i=i/2;
               } else {
                i-=1;
               }
               kin+=1;
            }
            
        }
        mymap[i]=kin;
        if(kin > k){
            count+=1;
        }
    }
    
    return count;
    
}
int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        ll k;
        cin >> n >> k;
        
        ll answer = getNumber(n, k);
        cout << answer << endl;
    }

    return 0;
}