#include <bits/stdc++.h>
using namespace std;


void myfun(vector<int> a, vector<int> c, int cost){

    int min_i = 0;
    int min_v = INT_MAX;
    
    for (int i = 0; i < a.size(); i++){
        if (min_v > a[i]*c[i]){
            min_v = a[i]*c[i];
            min_i = i;
        }
    } 
    cost+=min_v;
    a.erase(a.begin()+min_i);
    //c.pop();

    if (a.size()){
        myfun(a, c, cost);
    } else {
        cout << cost << endl;
    }
    
}
int main() {
	int t;
    cin >> t;

    
    while (t--) {
        vector<int> a;
        vector<int> c;

        int n;
        cin >> n; 
        
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++){
            int y;
            cin >> y;
            c.push_back(y);
        }

        myfun(a, c, 0);
        
    }

    return 0;

}
