#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

string myfun(string s){
    ll count_y = 0;
    for (ll i = 0; i < s.size(); i++){
        if (s[i]=='Y'){
            count_y+=1;
        }
    }

    if (count_y > 1){
        return "NO";
    }
    return "YES";
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--){

        string s;
        cin >> s;

        cout << myfun(s) << endl;
    }
    //cout << answer << endl;
}
