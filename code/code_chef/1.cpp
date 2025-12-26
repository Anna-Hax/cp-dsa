#include <bits/stdc++.h>
using namespace std;

int myfun(vector<int> arr){
    int sum = 0;
    
    for (int i = 0; i<arr.size(); i++){
        sum += arr[i];
    }
    
    if (sum >= 0){
        return 0;
    } else {
        int answer = (-1*sum)/arr.size();
        return answer + 1;
    }
    return 0; 
}

int main() {
	
	int t;
    cin >> t;

    
    while (t--) {
        vector<int> arr;
        int n;
        cin >> n; 
        while (n--){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        
        int answer = myfun(arr);
        cout << answer << endl;
    }

}
