#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

int fun(vector<int> arr){
    int smallest = arr[0];
    int sec_small = arr[1];

    if ((arr[1]-arr[0]) >= arr[0]){
        return arr[1]-arr[0];
    } else {
        return arr[0];
    }
    
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
        cout << fun(arr) << endl;
    }

    return 0;
}