#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
    public:

    int getNumber(vector<tuple<int, int>> movies){
        sort(movies.begin(), movies.end());

        int lastending = -1;
        int count = 0;
        for (auto& m: movies){
            if (get<1>(m) > lastending){
                count += 1;
                lastending = get<1>(m);
            }
        }

        return count;

    }
};
int main(){
    Solution sol;
    //vector<tuple<int, int, int>> abc = {{2, 3, 1}, {1, 2, 2}};

   // int t;
   // cin >> t;

    //while (t--){
        int n;
        cin >> n;
        vector<tuple<int, int>> movies;

        while (n--){
            int x;
            cin >> x;
            int y;
            cin >> y;

            movies.push_back({x, y});
        }
        

        int answer = sol.getNumber(movies);
        cout << answer;

    //}

    
}