#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int getNumber(vector<int> arr){
    int count = 0;
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++){
        if (arr[i]<max){
            count +=1;
        } else {
            max = arr[i];
        }
    }

    return count;
}
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
        int answer = getNumber(arr);
        cout << answer << endl;
    }

    return 0;
}