#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<pair<int, int>> laptops(n);

    for (int i = 0; i < n; ++i) {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops.begin(), laptops.end());

    bool found = false;
    for (int i = 0; i < n - 1; ++i) {
        if (laptops[i].second > laptops[i + 1].second) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Happy Alex" << endl;
    } else {
        cout << "Poor Alex" << endl;
    }

    return 0;
}