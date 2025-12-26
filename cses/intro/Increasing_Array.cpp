#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v;
    for (long long i = 0; i < n; i++){
        long long num;
        cin >> num;

        v.push_back(num);
    }
    long long count = 0;
    for (long long j = 0; j < n-1; j++){

        if (v[j] > v[j+1]){
            count += v[j] - v[j+1];
            v[j+1] = v[j];
        }
    }

    cout << count;
    return 0;
}
