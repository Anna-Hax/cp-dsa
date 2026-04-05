#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    int n = x + y;

    if (y == 0) {
        cout << "NO" << endl;
        return;
    }

   
    if (n % 2 == 0 && x == 0) {
        cout << "NO" << endl;
        return;
    }
    

  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}