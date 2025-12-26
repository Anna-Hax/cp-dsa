#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;

    cin >> n;
    vector<long long> result;
    vector<long long> result_even;
    vector<long long> result_odd;
    vector<int> not_allowed = {2, 3, 4};
    for (auto i: not_allowed){
        if (n == i){
            cout << "NO SOLUTION";
        } else{
            for (long long j = 1; j <= n; j++){
                if (j%2 == 0){
                    result_even.push_back(i);
                } else {
                    result_odd.push_back(i);
                }
            };

            result.reserve( result_even.size() + result_odd.size() ); // preallocate memory
            result.insert( result.end(), result_even.begin(), result_even.end() );
            result.insert( result.end(), result_odd.begin(), result_odd.end() );

            for (auto r: result_even){
                cout << r << " ";
            }
        };

        
    }

    
    return 0;
}
