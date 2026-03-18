// By Auchenai01
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
const ll MOD = 998244353;
const ll MAXX = 1e16;
const int INF = 1e9 + 7;

 
int algo(int m, vector<string> arr){
    vector<int> result;
    int i = 0;
    int j = 0;
    while(j<arr.size()){
        int current=0;
        if(i==j){
            j+=1;
        } else{
            if(arr[i]!=0){
                i+=1;
            } else {
               // current+=1;
                for(int w = i; w < arr.size(); w++){
                    if(arr[w]==0){
                        current+=1;
                    }else {
                        j=w;
                        break;
                    }
                }

                ll num=abs(arr[j]-arr[i-1]);
                num-=1;
                bool possible=false;
                if (num<=current){
                    possible=true;
                }

                if(possible){
                    
                }

            }
        }

    }

}
 
 
int main() {
    cin.tie(0);
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<string> arr(n, 0);
    int temp;
    for(int i = 0; i<n; i++){
        cin >> temp;
        arr[i]=temp;
    }

    int result = algo(m, arr);
    
    cout << result << endl;
    
 
    return 0;
}