#include <bits/stdc++.h>
#include <set>
#include <iostream>
using namespace std;

//class Solution{
//    public:
//    int getDistNumber(vector<long long> arr){
//        unordered_map<long long, long long> exist;
//        int count = 0;
//        for (long long i = 0; i < arr.size(); i++){
//            if (!exist[arr[i]]){
//                count += 1;
//                exist[arr[i]] = 1;
//            }
//        }
//        return count;
//    }
//};
int main(){
    //Solution sol;

    long long n;
    cin >> n;
    set<long long> arr;
    while (n--){
        long long x;
        cin >> x;
        arr.insert(x);
        
    }
    //int answer = sol.getDistNumber(arr);
    cout << arr.size();
}