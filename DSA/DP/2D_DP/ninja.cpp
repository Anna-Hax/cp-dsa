#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findnum(int day, vector<vector<int>>& points, vector<vector<int>>& dp, int last) {

        if(dp[day][last]!=-1){
            return dp[day][last];
        }
        int maxi=0;

        if(day==0){
            
            for(int i = 0; i<=2; i++){
                if(i!=last){
                    maxi=max(maxi, points[day][i]);
                }
            }
            return dp[day][last]=maxi;
        }

        maxi=0;

        for(int i = 0; i<=2; i++){
            if(i!=last){
                maxi=max(maxi, points[day][i] + findnum(day-1, points, dp, i));
            }
           
        }

        return dp[day][last] = maxi;

    }
};

vector<ll> myfun(int n, vector<vector<int>> points){
    vector<vector<int>> dp(n, vector<int>(4, -1));
    int last = 3;
    return findnum(n-1, points, dp, last);
}

int main() {
   vector<vector<int>> points = {{10, 40, 70},
                                   {20, 50, 80},
                                   {30, 60, 90}};

    int n = points.size();  
    Solution solver;

    int result = solver.myfun(n, points);
    cout << result << endl;

    return 0;
}