#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the maximum number of content students
    int findContentChildren(vector<int>& student, vector<int>& cookie) {
        // Sort both arrays to apply the greedy strategy
        sort(student.begin(), student.end());
        sort(cookie.begin(), cookie.end());

        reverse(student.begin(), student.end());
        reverse(cookie.begin(), cookie.end());

        int count = 0;
    
        for (int i = 0; i < student.size(); i++){
            if (cookie[0] >= student[i]){
                cookie.erase(cookie.begin() + i);
                count += 1;
            } 
        }
   
       
        return count;
    }
};

int main() {
    vector<int> student = {1, 2, 3};
    vector<int> cookie = {1, 1};

    // Create Solution object
    Solution solver;

    // Get the number of content students and print it
    int result = solver.findContentChildren(student, cookie);
    cout << "Maximum number of content students: " << result << endl;

    return 0;
}