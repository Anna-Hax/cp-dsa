#include <iostream>
#include <vector>
#include <string>

using namespace std;

string can_sort(int k, vector<int>& arr){
    if (k == 1){
        vector<int> arr1 = arr;
        sort(arr1.begin(), arr1.end());
       if (arr == arr1){
            return "Yes";
       } else{
        return "No";
       };
    } else{
        return "Yes";
    };
};

int main() {
    int t;
    cin >> t;

    vector<string> results;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        results.push_back(can_sort(k, arr));
    }

    for (string res : results) {
        cout << res << endl;
    }

    return 0;
}

