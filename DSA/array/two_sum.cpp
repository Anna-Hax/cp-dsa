#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twosum(int k, vector<int>& arr) {
        int i = 0;
        int n = arr.size();
        int j = n-1;
        vector<vector<int>> final;
        for (int m = 0; m < n; m++){
            final.push_back({arr[m], m});
        }
        sort(final.begin(), final.end());

        while(j > i){
            if (final[i][0]+final[j][0] == k){
                return {final[i][1], final[j][1]};
            } else if (final[i][0]+final[j][0] > k){
                j--;
            } else {
                i++;
            }
        }

        return {1, -1};
    }
};

int main() {
    vector<int> arr = {2, 4, 1, 6, 7};
    int k = 14;
    // Create Solution object
    Solution solver;

    // Get the number of content students and print it
    vector<int> result = solver.twosum(k, arr);
    for (auto &t : result){
        cout << t;
    }
    //cout << "Maximum number of content students: " << result << endl;

    return 0;
}