#include <bits/stdc++.h>
using namespace std;
#include <vector>

string myfun(int n){
    while (n!=1){
        if (n==5 || n==7 || n==9){
            return "NO";
        } else {
            if (n%2==0){
                n = n/2;
            } else {
                n = (n^3)+1
            }
        }
    }

    return "YES"
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       
        cout << myfun(n) << endl;
               
    }

    return 0;
}