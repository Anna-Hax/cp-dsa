#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;


int removeLeftmostSetBit(int n) {
    int msb = (n ^ (n | (n - 1)));
    return n ^ msb;
}

void fun(int n){

    int naya = pow(2, n);
    
    //vector<int> result;
    unordered_map<int, int> used;
   
    //int num = naya-1;
    
    //result.push_back(max_i);
    int t = n;

    for(int i = 0; i < 2; i++){
        t = n-i;
        int num = pow(2, t) - 1;
        cout << num << " ";
        used[num] = 1;   
    }

    // now t = n-2
    t--;
    
    for (int j = t; j > 0; j++){
        int num = pow(2, t) - 1;
        cout << num << " ";
        used[num] = 1;   
        
    }
    /*
    100000 = 2^n
    11111 = (2^n)-1 = 5 set bits
    01111 = 2^(n-1) - 1 = 4
    00111 = 2^(n-2) - 1 = 3 ---- let n-2 = t
    10111 = 2^(n-2) - 1 + 2^(t+2) = 3 set bits
    00011 = 2^(n-3) - 1 --- t = n-3
    01011 = 2^(n-3) - 1 + 2^(t+2)
    10011 = 2^(n-3) - 1 + 2^(t+3)
    11011 = 2^(n-3) - 1 + 2^(t+3) + 2^(t+2)
    00001 = 2^(n-4) - 1 --- t = n-4
    ... all combinations
    00000
    then all even in ascending order
    */
    








    //result.push_back(0);
    cout << 0 << " ";
    used[0] = 1;

    for (int m = 0; m < n; m++){
        if (used[m]==0){
            //result.push_back(m);
            cout << m << " ";
        }
    }
    
    //return result;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        fun(n);
        cout << endl;
        //vector<int> result = fun(n);
        //for (int i = 0; i < result.size(); i++){
        //    cout << result[i] << " ";
        //} 
    }

    return 0;
}