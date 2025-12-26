#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

ll myfun(vector<long long> people, vector<long long> app, long long k){
    sort(people.begin(), people.end());
    sort(app.begin(), app.end());

    ll i = 0;
    ll j = 0;
    ll count = 0;

    while (i < people.size() && j < app.size()){
        if (app[j] <= people[i]+k && app[j] >= people[i]-k){
            i++;
            j++;
            count++;
        } else if (app[j] < people[i]-k){
            j++;
        } else {
            i++;
        }
    }
    return count;
    
}

int main(){

    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    ll m;
    cin >> m;
    ll k;
    cin >> k;
    vector<long long> people;
    while (n--){
        long long x;
        cin >> x;
        people.push_back(x); 
    }
    vector<long long> app;
    while (m--){
        long long y;
        cin >> y;
        app.push_back(y); 
    }

    ll answer = myfun(people, app, k);
    cout << answer << endl;
}