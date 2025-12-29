#include <bits/stdc++.h>
#include <vector>
#include <tuple>
#include <iostream>
using namespace std;
using ll = long long;

ll getmax(vector<tuple<ll, ll>>& time_list){
    sort(time_list.begin(), time_list.end());

    ll count = 0;
    ll max = 0;

    for (int i = 0; i < time_list.size()-1; i++){
        tuple<ll> temp_1 = time_list[i];
        tuple<ll> temp_2 = time_list[i+1];

        if (temp_1[1]>temp[0]){
            count += 1;
        }

    }
    
}


int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    
    ll m;
    cin >> m;

    vector<tuple<ll, ll>> time_list;

    ll x;
    ll y;
    while (n--)
    {
        cin >> x;
        cin >> y;
        time_list.push_back({x, y});

    }
    ll answer = getmax(time_list);
    cout << answer << endl;
}
