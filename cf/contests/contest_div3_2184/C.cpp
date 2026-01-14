#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll getNumber(ll n, ll k){
    ll count = 0;
    
    ll left = n;
    ll right = n;
    while (right>1){
        if (left==k || k==right){
            break;
        }
        left = left/2;
        right = right/2 + right%2;

        count+=1;
    }

    if (k==left || right == k){
        return count;
    } else {
        return -1;
    }
    

    
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