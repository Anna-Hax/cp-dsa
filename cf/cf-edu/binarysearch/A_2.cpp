#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll w, h, n;
    cin >> w >> h >> n;

    ll low = max(w, h);
    ll high = max(w, h)*n;
    ll mid;
    ll ans=high;
    while(low<=high){
        mid=(low+high)/2;
        if((mid/w)*(mid/h) >= n){
            ans=mid;
            high=mid-1;
        }else {
            low=mid+1;
        }
    }

    cout << ans << endl;
    return 0;
}