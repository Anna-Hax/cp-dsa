#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findnumjumps(int k, vector<int>& heights) {

        map<int, int> mp;
        mp[0]=0;

        int i;
        
        for(i=1; i<heights.size();i++){
            int temp = 1;
            int mjump=INT_MAX;
            while(temp<=k){
                if(i-temp>=0){
                    int jump = mp[i-temp] + abs(heights[i-temp]-heights[i]);
                    mjump=min(mjump, jump);
                }
               
                temp++;
            }
            mp[i]=mjump;
        }
        

        return mp[heights.size()-1];
        
    }
};

int main() {
    vector<int> heights = {10, 5, 20, 0, 15};
    int k = 2;

    Solution solver;

    int result = solver.findnumjumps(k, heights);
    cout << result << endl;

    return 0;
}