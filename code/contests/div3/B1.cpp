#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

int fun(vector<int> a){
    int n = a.size();
    
    long long S = 0;
    for (int i = 1; i < n; i++)
        S += abs(a[i] - a[i-1]);

    long long best = 0;

    for (int i = 1; i < n-1; i++) {
        long long gain =
            abs(a[i] - a[i-1]) +
            abs(a[i] - a[i+1]) -
            abs(a[i-1] - a[i+1]);
        best = max(best, gain);
    }

    best = max(best, (long long)abs(a[1] - a[0]));
    best = max(best, (long long)abs(a[n-1] - a[n-2]));

    return S-best;

    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr;
        int n;
        cin >> n;
        while (n--) {
            
            int x;
            cin >> x;
            arr.push_back(x);
        }
        cout << fun(arr) << endl;
    }

    return 0;
}