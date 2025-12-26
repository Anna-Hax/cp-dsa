#include <iostream>
#include <vector>
using namespace std;

string str = "helloworld";

int check(int l, int k){
    for (int i = l; i < k; i++){
        if (str[i] == str[k]){
            return i;
        }
    }
    return -1;
}
int main(){
    int len = 1;
    int store = 0;
    int start = 0;
    for (int k = 1; k < str.size(); k++){
        int i = check(start, k);
        if (i == -1){
            len++;
            if (len > store){
                store = len;
            }

        } else {
            len = k - i;
            start = i;
            //cout << len << " " << k << " " << i << " \n";
        }
        

        if (len > store){
           store = len;
        }
        
    }
    cout << "Length of distinct characters is: " << store;
    return 0;
}