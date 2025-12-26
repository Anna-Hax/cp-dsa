#include <iostream>
using namespace std;

int rollwheel(int l, int a, int b) {

    if (l%b == 0 or b%l == 0){
        int temp = a;
        while ((temp+b)%l != a){
            temp+=b;
        }
        
        return max(temp%l, a);

    } else {
        return l-1;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l;
        cin >> l;
        int a;
        cin >> a;
        int b;
        cin >> b;
        cout << rollwheel(l, a, b) << endl;

    }

    return 0;
}