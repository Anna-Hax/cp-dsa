#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long factorial(int n) {
    if (n < 0) {
        return -1; 
    }
    
    std::vector<long long> dp(n + 1); 
    dp[0] = 1; 

    for (int i = 1; i <= n; ++i) {
        dp[i] = i * dp[i - 1]; 
    }

    return dp[n];
}


ll myfun(vector<ll> arr){

    ll rounds = 0;
    ll extra = 0;

    ll sum = 0;

    for (ll i = 0; i < arr.size(); i++){
        sum += arr[i];
    }

    rounds = sum/(arr.size()-1);
    //extra = sum%(arr.size()-1);

    ll count = 0;

    for (ll j = 1; j < arr.size(); j++){
        if (arr[j] > rounds){
            count+=1;
        }
    }

    ll a_0 = arr[0];
    //cout << "a0 " << a_0 << endl;
    arr.erase(arr.begin());

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    ll less_sum = a_0;

    for (ll m = count; m < arr.size(); m++){
        less_sum+=arr[m];
        //cout << less_sum << "aahhhh" << endl;
    }

    //cout << "ROUNDS " << rounds << endl;
    //cout << "less sum " << less_sum << endl;
    //cout << "size-count  " << arr.size()-count << endl;
    //cout << "blahhhh " << less_sum/(arr.size()-count);

    if (less_sum/(arr.size()-count) >= rounds){
        if (less_sum%(arr.size()-count)==0){

            ll factorial_max = factorial(count);
            ll remaining_factorial = factorial(arr.size()-count);

            return (factorial_max * remaining_factorial) % 998244353;
        } else {
            unordered_map<int, int> freq;
            for (ll x : arr){
                freq[x]++;
            }
        
            long long numerator = factorial(arr.size());
            long long denominator = 1;
        
            for (auto &p : freq){
                denominator *= factorial(p.second);
            }
        
            long long result = numerator / denominator;

            return result % 998244353;
        }

        
    } else {
        return 0;
    }
    
    
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--){

        ll n;
        cin >> n;

        n+=1;

        vector<long long> arr;
        long long y;
        while (n--)
        {
            cin >> y;
            arr.push_back(y);
        }
        cout << myfun(arr) << endl;
    }
}
