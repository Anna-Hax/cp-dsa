#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll myfun(ll n, ll m, ll k){
    ll answer = 1;
    if (m==1){
        return 2;
    } else if (m == 0){
        return 1; 
    } else{
        if (k==n || k == 1){
            ll i = 0;
            ll j = 0;
            while (m){
                j++;
                if (m-(j-i) >= 0){
                    m -= j-i;
                    answer+=1;
                } else {
                    return answer;
                }
            }
            return answer;
        } else {
            k--;
            ll i = k-1;
            ll j = k+1;
            m-=2;
            answer+=2;

            while (m > 0 && (i>0 || j < n-1)){
                if (j-k >= k-i && i > 0){
                    i--;
                    if (m-(k-i)>=0){
                        answer+=1;
                        m-=k-i;
                    } else {
                        return answer;
                    }
                } else {
                    if (j > n-1){
                        j++;
                        if (m-(j-k)>=0){
                            answer+=1;
                            m-=j-k;
                        } else {
                            return answer;
                        }
                    } else {
                        i--;
                        if (m-(k-i)>=0){
                            answer+=1;
                            m-=k-i;
                        } else {
                            return answer;
                        }
                    }
                }

            }
        }
    }

    return answer;

    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;

        ll answer = myfun(n, m, k);

        cout << answer << endl;
    }

    return 0;
}
