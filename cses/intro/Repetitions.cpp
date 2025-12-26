#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int max = 1;
    int count = 1;
    
    for (int i = 0; i < str.size()-1; i++){
        
        if (str[i] == str[i+1]){
            count += 1;
        } else{
            count = 1;
        }

        if (count > max){
            max = count;
        }
    }
    cout << max;

    return 0;
}
