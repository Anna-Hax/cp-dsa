#include <iostream>
using namespace std;

int can_vanya_win(int x, int n) {
    if (n%2==0){
        return 0;
    } else {
        return x;
    }

    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        int n;
        cin >> x;
        cin >> n;
        cout << can_vanya_win(x, n) << endl;
    }

    return 0;
}
