#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>
long long can_vanya_win(long long n, long long k, vector<long long> arr) {
    

    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long k;
        cin >> k;
        vector<long long> arr;
        for (int i = 0; i < n; i++){
            long long a;
            cin >> a;
            arr.push_back(a);
        };

        cout << can_vanya_win(n, k, arr) << endl;
    }

    return 0;
}
