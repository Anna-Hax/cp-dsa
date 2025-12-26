#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the maximum number of content students
    int findContentChildren(vector<int>& mylist) {

        int jumps = 0;
        int farthest = 0;
        int currentend = 0;


        for (int i = 0; i < mylist.size() - 1; i++){
            farthest = max(farthest, mylist[i]+i);

            if (i == currentend){
                jumps += 1;
                currentend = farthest;

            }

        }
    
        return jumps;
    }
};

int main() {
    vector<int> mylist = {3, 2, 1, 1, 4};

    // Create Solution object
    Solution solver;

    // Get the number of content students and print it
    int result = solver.findContentChildren(mylist);
    cout << "Maximum number of content students: " << result << endl;

    return 0;
}