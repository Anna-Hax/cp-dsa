#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<long long> getNumber(vector<long long> arr){
    vector<long long> answer;   

    for (int l= 1; l <= arr.size(); l++){
        vector<long long> even;
        vector<long long> odd; 
        for (int i = 0; i < arr.size(); i++){
            if (arr[i]%2==0){
                even.push_back(arr[i]);
            } else {
                odd.push_back(arr[i]);
            }
        }
  
        long long count = 0;

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        if (l == 1){
            if (odd.size()){
                count = odd[odd.size()-1];
            } else {
                count = 0;
            }
            
        } else {
            if (odd.size()>=1 && even.size()>=l-1){
                int k = l-1;
                count += odd[odd.size()-1];
                int en = even.size();
                while(k--){
                    long long even_max = even[en-1];
                    count += even_max;
                    //even.erase[even.size()-1];
                    en--;
                }
            } else if (odd.size() == 0){
                count = 0;
            } else if (odd.size()>=1 && even.size()<l-1){
                int k = l-1;
                int on = 0;
                while (even.size()<k){
                    long long min = odd[on];
                    //odd.erase(0);
                    on++;
                    k--;
                }
                if (k == 0){
                    if (l % 2 != 0){
                        count += odd[odd.size()-1];
                    } else {
                        count = 0;
                    }
                } else {
                    if ((l-1-even.size()) % 2 == 0){
                        if (on < odd.size()-1){
                            count += odd[odd.size()-1];

                            int en = even.size()-1;
                        
                            while (k--){
                                count += even[en];
                                en--;
                            }
                        } else {
                            count = 0;
                        }
                    } else {

                        int en = even.size()-1;

                        if (odd.size()==1){
                            count = 0;
                        } else if (odd.size()>=2){
                           
                            on++;
                            count += odd[odd.size()-1];
                            k--;
                            
                            while (k--){
                                count += even[en];
                                
                                en--;
                            }
                        } else {
                            while (k--){
                                count += even[en];
                                en--;
                            }
                        }

                         
                    } 

                }   

            } 
        }
        

        answer.push_back(count);
    }
    return answer;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t;
    cin >> t;

    while (t--) {
        vector<long long> arr;
        int n;
        cin >> n; 
        while (n--){
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        vector<long long> answer = getNumber(arr);
        for (int i = 0; i < answer.size(); i++){
            cout << answer[i] << " ";
        }
        cout << endl;
    }

    return 0;
}