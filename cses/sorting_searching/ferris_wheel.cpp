#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
using ll = long long;

ll getseats(vector<long long>& arr, ll x){
    sort(arr.begin(), arr.end());

    ll i = 0;
    ll j = arr.size()-1;
    ll count = 0;
    while(i <= j){
        if(arr[i]+arr[j] <= x){
            i++;
            j--;
            count += 1;
        } else {
            j--;
            count += 1;
        }
    }
    
    return count;
}


int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    // Solution sol;

    long long n;
    cin >> n;
    
    long long x;
    cin >> x;

    vector<long long> arr;
    long long y;
    while (n--)
    {
        cin >> y;
        arr.push_back(y);
    }
    ll answer = getseats(arr, x);
    cout << answer << endl;
}
