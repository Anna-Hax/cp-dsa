#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll getseats(vector<vector<ll>>& tm) {
 
    sort(tm.begin(), tm.end()); 
    ll i = 0;
    ll j = 1;
    ll count = 1;
    ll result = 1;
 
    while (j < tm.size()){
        if (tm[i][0]>tm[j][1]){
            count += 1;
        } else {
            i+=1;
        }
        j+=1;
        result = max(count, result);
    }
 
    return result;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
 
    vector<vector<ll>> tm;
 
    while (n--) {
        ll start, end;
        cin >> start >> end;
        tm.push_back({end, start});
    }
 
    ll answer = getseats(tm);
    cout << answer << endl;
}