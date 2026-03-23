#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> sorted_a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted_a[i] = a[i];
    }

    sort(sorted_a.begin(), sorted_a.end());

    int L = -1, R = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted_a[i]) {
            L = i;
            break;
        }
    }

    if (L == -1) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != sorted_a[i]) {
            R = i;
            break;
        }
    }

    reverse(a.begin() + L, a.begin() + R + 1);

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted_a[i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "yes" << endl;
        cout << L + 1 << " " << R + 1 << endl; 
    } else {
        cout << "no" << endl;
    }

    return 0;
}