#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
int fun(vector<int> arr){
    
    int max_i = 0;
    int max_v = INT_MIN;
    for (int i = 1; i < arr.size()-1; i++){
        int mid = abs((arr[i+1] - arr[i]) - (arr[i] - arr[i-1]));
        int diff = abs(arr[i+1] - arr[i-1]);
 
        int final_diff = mid - diff;
        if (max_v < final_diff){
            max_i = i;
            max_v = final_diff;
        }
    }
    arr.erase(arr.begin()+max_i);
    int sum = 0;
    for (int j = 2; j < arr.size()-1; j++){
        sum += abs(arr[j]-arr[j-1]);
    }
    return sum;
    
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr;
        int n;
        cin >> n;
        arr.push_back(0);
        while (n--) {
            
            int x;
            cin >> x;
            arr.push_back(x);
        }
        arr.push_back(0);    
        cout << fun(arr) << endl;
    }
 
    return 0;
}