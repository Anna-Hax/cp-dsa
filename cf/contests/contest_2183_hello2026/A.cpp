#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    
    while (t--) {
        vector<int> arr;
        int n;
        cin >> n; 
        while (n--){
            int x;
            cin >> x;
            arr.push_back(x);
        }
    
        if (arr[0]==0 && arr[arr.size()-1]==0){
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    } 

    return 0;
}