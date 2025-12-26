#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string can_sort(int k, vector<int>& arr) {
    if (arr.size() >=3){
        for (int i = 0; i < arr.size() - 2; i++) {
            vector<int> sub_arr = {arr[i], arr[i+1], arr[i+2]};
            auto max_int = max_element(sub_arr.begin(), sub_arr.end());
            if (*max_int == k){
                return "Yes";
            };
        }
    } else{
        auto max_int = max_element(arr.begin(), arr.end());
        if (*max_int == k){
            return "Yes";
        } 
        return "No";
    }

    return "No";
}


int main() {
    cin.tie(0);
    int t;
    cin >> t;

    vector<string> results;
    bool gaveOutput = false;
    while (t--) {
        int n, k;
        cin >> n >> k;
        // cout << k;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            if(temp == k)
            {
                cout << "hello" << endl;
                gaveOutput = true;
            }
            cin >> arr[i];
        }
        // cout << can_sort(k, arr) << endl;
        if(!gaveOutput)
        {
            cout << "NO" << endl;
        }else
        {
            cout << "YES" <<endl;
        }
        // results.push_back(can_sort(k, arr));
    }

    //for (string res : results) {
    //    cout << res << endl;
    //}

    return 0;
}

