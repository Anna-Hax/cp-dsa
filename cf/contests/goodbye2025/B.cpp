#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

ll myfun(string s){
    ll count = 0;

    if (s[0] != 's'){
        count+=1;
        s[0] = 's';
    }

    if (s[s.size()-1]!='s'){
        count+=1;
        s[s.size()-1] = 's';
    }

    for (ll i = 1; i < s.size()-1; i++){
        if (s[i]=='u'){
            if (s[i+1]!='s'){
                s[i+1]='s';
                count+=1;
            } 
            if (s[i-1]!='s'){
                s[i-1]='s';
                count+=1;
            }
        }
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

        string s;
        cin >> s;

        cout << myfun(s) << endl;
    }
    //cout << answer << endl;
}
