#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>> sequences;

    set<pair<int, int>> tails;

    for (int i = 0; i < n; i++) {
       
        auto it = tails.lower_bound({a[i], -1});

        if (it == tails.begin()) {
            tails.insert({a[i], (int)sequences.size()});
            sequences.push_back({a[i]});
        } else {
            it--; 
            int idx = it->second;
            
            tails.erase(it);
            tails.insert({a[i], idx});
            
            sequences[idx].push_back(a[i]);
        }
    }

    for (const auto& seq : sequences) {
        for (int j = 0; j < seq.size(); j++) {
            cout << seq[j] << (j == seq.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}