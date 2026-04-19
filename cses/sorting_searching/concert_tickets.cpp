#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

vector<ll> getseats(vector<ll>& tickets, vector<ll>& people){
    
    map<ll, ll> mp;
    for (auto &at : tickets){
        mp[at]+=1;
    }
    vector<ll> result;

    for (auto &it : people){
        while (it){
            if (mp[it]){
                mp[it]-=1;
                result.push_back(it);
                break;
            } else {
                it-=1;
            }
        }
        if (it==0){
            result.push_back(-1);
        }
    }
    return result;
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    
    ll m;
    cin >> m;

    vector<ll> tickets;
    vector<ll> people;

    ll x;
    while (n--)
    {
        cin >> x;
        tickets.push_back(x);
    }
    while (m--)
    {
        cin >> x;
        people.push_back(x);
    }
    vector<ll> answer = getseats(tickets, people);
    for (auto &at : answer){
        cout << at << endl;
    }
    
}
