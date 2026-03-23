#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);

void solve(int caseNum) {
    double R;
    int n;
    cin >> R >> n;

    double sinTheta = sin(PI / n);
    
    double r = (R * sinTheta) / (1 + sinTheta);

    cout << "Case " << caseNum << ": " << fixed << setprecision(10) << r << endl;
}

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }
    return 0;
}