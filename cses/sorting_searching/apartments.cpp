#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

long long myfun(vector<long long> people, vector<long long> app, long long k){
    sort(people.begin(), people.end());
    sort(app.begin(), app.end());

    long long i = 0;
    long long j = 0;
    long long count = 0;

    while (i < people.size() && j < app.size()){
        if (app[j] <= people[i]+k && app[j] >= people[i]-k){
            i++;
            j++;
            count++;
        } else if (app[j] < people[i]-5){
            j++;
        } else {
            i++;
        }
    }
    return count;
    
}

int main(){

    long long n;
    cin >> n;
    long long m;
    cin >> m;
    long long k;
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

    cout << myfun(people, app, k) << endl;
}