#include <iostream>
#include <vector>
using namespace std;

int disks(const vector<int>& arr) {
    int n = arr.size();
    if (n < 2){
        return 0;
    };

    vector<int> dists;
    vector<int> max_rad;

    for (int i = 0; i + 1 < n; i++) {
        dists.push_back(arr[i+1] - arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int left = (i > 0) ? arr[i] - arr[i-1] : 1e9;
        int right = (i + 1 < n) ? arr[i+1] - arr[i] : 1e9;
        max_rad.push_back(min(left, right));
    }

    int count = 0;
    for (int i = 0; i + 1 < n; i++) {
        if (max_rad[i] + max_rad[i+1] > dists[i]) {
            count++;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << disks(arr) << endl;
    }
    return 0;
}
