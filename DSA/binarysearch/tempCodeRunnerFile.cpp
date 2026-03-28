#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& piles, int h, int k){
        int sum=0;
        for(int i = 0; i<piles.size(); i++){
            sum+=(piles[i]/k)+1;
        }
        if(sum>h){
            return false;
        } else {
            return true;
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size()==h){
            return piles[piles.size()-1];
        }
        int high=piles[piles.size()-1];
        int low=1;
        int mid;

        int ans=max(piles);
        while(high>=low){
            mid=(high+low)/2;
            
            if(check(piles, h, mid)){
                ans=mid;
                cout << ans;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {30,11,23,4,20};
    int h=5;
    Solution sol;
    int maxSum = sol.minEatingSpeed(arr, h);

    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}