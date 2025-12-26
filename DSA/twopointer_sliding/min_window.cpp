#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        
       vector<int> freq(26, 0);

       for (int i = 0; i < t.size(); i++){
            if (isupper(s)){
                freq[t[i]-'A']++;
            } else {
                freq[t[i]-'a']++;
            }
       }

       int left = 0; 
       int count = 0;
       int length;
       int min_value = s.size()+1;
       int right = 0;
       while(right<s.size()){
            if (isupper(s)){
                if (freq[s[right]-'A']){
                    count ++;
                    freq[s[right]-'A']--;
                } 
            } else {
                if (freq[s[right]-'a']){
                    count ++;
                    freq[s[right]-'a']--;
                }
            }

            if (count == t.size()){
                length = right - left + 1;
                min_value = min(min_value, length);
                left++;
            }

            right++;

       }
       
       if (min_value == s.size()+1){
        return "";
       } else {
        return s.substr(left+1, right-left+1);
       }

    }
};

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;

    Solution sol;

    string answer = sol.minWindow(s, t);
    cout << answer;
}