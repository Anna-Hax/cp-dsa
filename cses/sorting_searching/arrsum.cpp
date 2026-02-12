#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
using ll = long long;
 
vector<ll> getmaxnum(vector<ll> arr, ll x)
{
    vector<ll> arr_cp = arr;
    sort(arr_cp.begin(), arr_cp.end());

    vector<ll> result(2, 0);

    ll i = 0;
    ll j = arr.size()-1;

    bool bl = false;

    while(i<j){
        if(arr_cp[i]+arr_cp[j]==x){
            bl = true;
            break;
        } else {
            if(arr_cp[i]+arr_cp[j]>x){
                j--;
            } else {
                i++;
            }
        }
    }


    if(bl){
        ll m;
        for(m=0; m<arr.size(); m++){
            if(arr_cp[i]==arr[m]){
                break;
            }
        }
        ll n;
        for(n=0; n<arr.size(); n++){
           
            if(arr_cp[j]==arr[n] && m!=n){
                break;
            }
        }

        result[0]=m;
        result[1]=n;

        
    }
    return result;
}
 
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    // Solution sol;
 
    ll n, x;
    cin >> n >> x;
    vector<ll> arr;
    ll temp;
    while (n--)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    vector<ll> answer = getmaxnum(arr, x);
    if(answer[0]== 0 && answer[1]==0){
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        // cout << answer[0]+1 << " ";
        // cout << answer[1]+1 << endl;

        ll x1 = min(answer[0], answer[1]);
        ll x2 = max(answer[0], answer[1]);
        
        cout << x1 + 1 << " " << x2 + 1 << endl;
    }
    
}
