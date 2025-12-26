#include <bits/stdc++.h>
using namespace std;
#include <vector>

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

        int sum = 0;
        for (int i = 1; i <= arr.size(); i++){
            sum += arr[i-1]*i
        }
        cout << sum << endl;
        
    }

    return 0;
}