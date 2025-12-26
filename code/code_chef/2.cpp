#include <bits/stdc++.h>
using namespace std;


int myfun(vector<int> a, vector<int> b, int x){
    
    int y = x;
    
    for (int i = 0; i < a.size(); i++){
        y = max(y+b[i], a[i]);
    }
    
    return y;
    
}
int main() {
	int t;
    cin >> t;

    
    while (t--) {
        vector<int> a;
        vector<int> b;

        int n;
        cin >> n; 
        int m;
        cin >> m;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++){
            int y;
            cin >> y;
            b.push_back(y);
        }
        int answer = 0;
        for (int i = 0; i < m; i++){
            answer += myfun(a, b, i+1);
        }
        cout << answer << endl;
    }

    return 0;

}
