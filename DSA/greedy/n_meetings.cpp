#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<tuple<int, int>> abc = {{2, 3}, {1, 2}};
    sort(abc.begin(), abc.end());

    for (auto t : abc) {
        cout << get<0>(t) << " " << get<1>(t) << endl;
    }
}
