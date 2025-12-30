#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

ll myfun(ll w, ll b){

    //top white
    ll w_copy = w;
    ll b_copy = b;
    ll i = 1;
    ll j = 2;

    ll count_1 = 0;
    while(w-i >= 0 && b-j >= 0){
        w-=i;
        b-=j;
        i*=4;
        j*=4;

        count_1 += 2;
    }

    if (w-i>=0){
        count_1 += 1;
    }

    //top black
    i = 2;
    j = 1;

    ll count_2 = 0;
    while(w_copy-i >= 0 && b_copy-j >= 0){
        w_copy-=i;
        b_copy-=j;
        i*=4;
        j*=4;

        count_2 += 2;
    }

    if (b_copy-j >= 0){
        count_2 += 1;
    }

    return max(count_1, count_2);
    
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--){

        ll w;
        cin >> w;

        ll b;
        cin >> b;

        cout << myfun(w, b) << endl;
    }
}
