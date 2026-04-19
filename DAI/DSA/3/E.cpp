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

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfUsers;
    cin >> numberOfUsers;

   
    unordered_map<string, int> usernameCounts;

    for (int i = 0; i < numberOfUsers; ++i) {
        string requestedUsername;
        cin >> requestedUsername;

       
        if (usernameCounts.find(requestedUsername) == usernameCounts.end()) {
            cout << "OK\n";
            
           
            usernameCounts[requestedUsername] = 1; 
        } else {
           
            cout << requestedUsername << usernameCounts[requestedUsername] << "\n";
            
          
            usernameCounts[requestedUsername]++; 
        }
    }

    return 0;
}