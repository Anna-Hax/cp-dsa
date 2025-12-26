#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

int find_min_when_zero(int n, vector<int> arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i+1] or arr[i] + 1 == arr[i+1]) {
            continue;
        } else {
            return arr[i] + 1;
        }
    }
    return arr[n-1]+1;
}
int mex(int n, vector<int> arr) {
    int result = 0;
    if (arr[0] == 0) {
        
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                result = find_min_when_zero(n, arr);
                return result;
            }
        }
        
        return 1;
    } 
    
    return 0;
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
        
        sort(arr.begin(), arr.end());
        
        cout << mex(n, arr) << endl;
    }

    return 0;
}