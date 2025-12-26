#include <iostream>
using namespace std;

int can_vanya_win(int n, int m) {
    return (n + m);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int m;
        int x;
        int y;
        cin >> n;
        cin >> m;
        cin >> x;
        cin >> y;

        for (int i=0; i < n; i++){
            int a;
            cin >> a;
        }
        for (int j=0; j < m; j++){
            int b;
            cin >> b;
        }
        cout << can_vanya_win(n, m) << endl;
    }

    return 0;
}
