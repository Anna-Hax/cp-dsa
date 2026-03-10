#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findnumjumps(int n) {

        map<int, int> mp;
        mp[0]=1;
        mp[1]=1;

        if(n>=2){
            for(int i=2; i<=n; i++){
                mp[i]= mp[i-1]+mp[i-2];
            } 
        }

        return mp[n];
    }
};

int main() {
    int n = 5;

    Solution solver;

    int result = solver.findnumjumps(n);
    cout << result << endl;

    return 0;
}