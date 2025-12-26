#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>
long long can_vanya_win(int n, vector<long long> arr_odd, vector<long long> arr_even) {
    //return (n + m);
    long long count = 0;
    sort(arr_odd.begin(), arr_odd.end());

    for (long long i = 0; i < arr_even.size(); i++){
        count += arr_even[i];
    };

    

    for (long long j = 0; j < arr_odd.size(); j++){
        if (arr_odd.size() % 2== 0){
            if (j > ((arr_odd.size() / 2) - 1) ){
                break;
            } else {
                count += arr_odd[j]; 
            }
        } else {
            if (j > (arr_odd.size() + 1) / 2){
                break;
            } else {
                count += arr_odd[j]; 
            }
        }
    };

    return count;

    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        vector<long long> arr;
        vector<long long> arr_even = {};
        vector<long long> arr_odd = {};
        cin >> n;
       
        for (long long i=0; i < n; i++){
            long long a;
            cin >> a;
            arr.push_back(a);
        }
    
        for (long long i =0; i<n; i++){
            if (arr[i] % 2 != 0){
                arr_odd.push_back(arr[i]);
            } else {
                arr_even.push_back(arr[i]);
            };
        }
      
        if (arr_odd.size() == 0){
            cout << 0 << endl;
        } else {
            cout << can_vanya_win(n, arr_odd, arr_even) << endl;
        };
    };

    return 0;
}
