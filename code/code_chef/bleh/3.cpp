#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int chief = 0;
        int opp = 0;
        int count = 0;

        for (int i = 0; i < s.size(); i++){
            if (s[i]==1){
                chief+=1;
            } else {
                opp+=1;
            }

            if (chief > opp){
                count += 1;
            }
        }

        cout << count << endl;
        
    }

    return 0;
}