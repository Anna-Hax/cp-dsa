#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
using ll = long long;
 
vector<ll> getsum(){

    ll n, x;
    cin >> n >> x;
    vector<ll> arr;
    ll temp;
    while (n--)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    vector<ll> prefix_sum(arr.size(), 0);
    prefix_sum[0]=arr[0];
    for(ll i = 1; i<arr.size(); i++){
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }

    vector<ll> result(x, 0);

    ll left;
    ll right;
    for(ll i = 0; i<x; i++){
        cin >> left >> right;

        result[i]=prefix_sum[right-1]-prefix_sum[left-1]+arr[left-1];
    }

    return result;

}
 
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    
    vector<ll> result = getsum();
    ll m = result.size();

    for(ll i = 0; i<result.size(); i++){
        cout << result[i] << endl;
    }
    
}
