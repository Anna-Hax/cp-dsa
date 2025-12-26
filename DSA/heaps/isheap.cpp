#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool isHeap(vector<int>& heap) {
        
        int n = heap.size()-1;
        while(n!=0){
            if (heap[(n-1)/2] > heap[n]){
                return false;
            }

            n--;
        }
        return true;
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> heap = {10, 20, 30, 25, 15};
    cout << sol.isHeap(heap) << endl;
    return 0;
}