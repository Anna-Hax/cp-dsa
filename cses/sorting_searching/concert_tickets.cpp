#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

ll getseats(vector<ll>& tickets, vector<ll>& people){
    sort(tickets.begin(), tickets.end());

    for(int i=0; i<people.size();i++){
        if()
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
    ll answer = getseats(tickets, people);
    cout << answer << endl;
}
