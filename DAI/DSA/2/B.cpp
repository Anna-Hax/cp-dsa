#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    vector<int> result(n);
    int left = 0;          
    int right = n - 1;    

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            result[i] = arr[left++];
        } 
        else {
            result[i] = arr[right--];
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}