#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

ll myfun(vector<ll> arr){

    ll sum = 0;
    for (ll j = 1; j < arr.size(); j++){
        sum -= arr[j];
    }

    ll max_sum = sum;
    
    sum += arr[0];
    
    sum += arr[1];
    max_sum = max(sum, max_sum);


    for (int i = 2; i < arr.size(); i++){
        sum += arr[i];
        if (arr[i-1] > 0){
            sum += arr[i-1];
        } else {
            sum -= arr[i-1];
        }

        max_sum = max(sum, max_sum);
    }
    return max_sum;
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
