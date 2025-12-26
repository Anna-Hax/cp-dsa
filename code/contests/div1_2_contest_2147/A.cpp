#include <iostream>
using namespace std;

int get_increasing_path(int x, int y) {
    if (x == y) {
        return -1;
    } else if (x < y) {
        return 2;
    } else { 
        if (y == 1) {
            return -1;
        } else {
            if (x > y + 1) {
                return 3;
            } else {
                return -1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        int y;
        cin >> y;
        cout << get_increasing_path(x, y) << endl;
    }

    return 0;
}