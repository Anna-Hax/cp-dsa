#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
vector<int> algo(int n){
    vector<int> out;
    out.push_back(n);
    long a = n;
    while (a>1){
        long interm;
        if (a%2 == 0){
            interm = a / 2;
            out.push_back(interm);
        } else {
            interm = (a*3) + 1;
            out.push_back(interm);
        };
 
        a = interm;
    }
    return out;
}
 
 
int main() {
    cin.tie(0);
    int n;
    cin >> n;
 
    vector<string> results;
    vector<int> out = algo(n);
    
    for (auto i: out){
        
        cout << i << " ";
    };
 
    return 0;
}