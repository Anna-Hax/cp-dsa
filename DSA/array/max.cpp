#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {1, 3, 2, 4};

int main(){
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Maximum element is: " << max;
    return max;
}