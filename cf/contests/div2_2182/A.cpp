#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

ll myfun(string s){

    if (s.size() <= 3){
        return 0;
    }

    int i = 0;
    int count = 0;
    while (i<s.size()-3){
        if (s.substr(i, 4)=="2025"){
            count = 1;
        } else if (s.substr(i, 4)=="2026"){
            return 0;
        }
        i++;
    }
    return count;
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

        string s;
        cin >> s;
        //cout << s.substr(0, 4);


        cout << myfun(s) << endl;
    }
}
