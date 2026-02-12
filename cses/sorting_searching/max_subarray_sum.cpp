#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
using ll = long long;
 
ll getmaxnum(vector<ll> arr)
{
    ll max_sum=arr[0];
    ll result=arr[0];
    for(ll i = 1;i<arr.size();i++){
        max_sum=max(max_sum+arr[i], arr[i]);
 
        result=max(result, max_sum);
    }
    return result;
}
 
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    // Solution sol;
 
    ll n;
    cin >> n;
    vector<ll> arr;
    ll x;
    while (n--)
    {
        cin >> x;
        arr.push_back(x);
    }
    ll answer = getmaxnum(arr);
    cout << answer << endl;
}
