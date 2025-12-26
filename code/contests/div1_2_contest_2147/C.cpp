#include <iostream>
#include <vector>
#include <string>
using namespace std;

string multiple(int n, string binnum) {
    int count = 0;
    vector<char> arr;
    vector<int> arr_rabbit;
    for (char c : binnum) {
        arr.push_back(c);
    }
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == '0'){
            arr_rabbit.push_back(i);
        };
    }

    if (arr[0] == 0){
        if (arr[1] == 1){
            count +=1;
            arr.erase(arr.begin());
        }
    }

    if (arr[arr[arr.size()-1]] == n-1){
        if (arr[arr.size()-2] == n-2){
            count +=1;
            arr.erase(arr.end());
        }
    }
    for (int i = 0; i < arr_rabbit.size(); i++){
        if (arr[i+1] - arr[i] == 1){
            count += 1;
        } else if (arr[i+1] - arr[i] == 2){
            count += 2;
        }
    }

    if (arr.size() == 0){
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int binnum;
        cin >> n;
        cin >> binnum;
        string binnumstr = to_string(binnum);
     
        cout << multiple(n, binnumstr) << endl;
    }

    return 0;
}