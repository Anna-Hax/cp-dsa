#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    set<vector<int>> longestOnes(vector<int>& nums) {
    
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-2; i++){
            int j = i+1;
            int k = nums.size()-1;

            while (j<k){
                if (nums[i]+nums[j]+nums[k]==0){
                    result.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (nums[i]+nums[j]+nums[k]>0){
                    k--;
                } else {
                    j++;
                }
            }
        }
        return vector<vector<int>>(result.begin(), result.end());
        
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> nums = {-1,0,1,2,-1,-4};

    // Output the result
    cout << sol.longestOnes(nums) << endl;
    return 0;
}