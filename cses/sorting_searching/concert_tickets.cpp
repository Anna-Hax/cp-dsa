#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <set>

using namespace std;
using ll = long long;

vector<ll> getseats(multiset<ll>& tickets, vector<ll>& people){
    
    vector<ll> result(people.size(), 0);

    for(ll i = 0; i < people.size(); i++){
        auto it = tickets.upper_bound(people[i]); // number of tickets greater than people[i];

        if(it == tickets.begin()){
            result[i] = -1;
        } else {
            --it;
            result[i] = *it;
            tickets.erase(it);
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    if (!(cin >> n >> m)) return 0;

    multiset<ll> tickets;
    vector<ll> people(m);

    ll x;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        tickets.insert(x);
    }

    for (ll i = 0; i < m; i++) {
        cin >> people[i];
    }
    
    vector<ll> answer = getseats(tickets, people);
    
    for (auto &at : answer){
        cout << at << "\n"; 
    }
    
    return 0;
}