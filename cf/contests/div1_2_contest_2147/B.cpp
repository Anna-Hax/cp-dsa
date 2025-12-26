#include <iostream>
#include <vector>
using namespace std;

int get_increasing_path(int n) {
    vector<int> arr;
    for (int i = 0; i < n; i++){
        arr.push_back(0);
    }
    arr[arr.size()-1] = n;
    arr[arr.size()-1-n] = n;

    for (int i = n-2; i >=0; i--){
        if (arr[i] != 0 and arr[arr.size() - 1 - i]){
            arr[arr.size()-2-(i+1)] == i + 1;
            arr[i]
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cout << get_increasing_path(x) << endl;
    }

    return 0;
}