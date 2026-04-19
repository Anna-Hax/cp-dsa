#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solveHanoi(int n, int source, int dest, int aux, vector<pair<int, int>>& moves) {
    if (n == 0) return;

    solveHanoi(n - 1, source, aux, dest, moves);

    moves.push_back({source, dest});

    solveHanoi(n - 1, aux, dest, source, moves);
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<pair<int, int>> moves;
    
    solveHanoi(n, 1, 3, 2, moves);

    cout << moves.size() << endl;

    for (const auto& move : moves) {
        cout << move.first << " " << move.second << endl;
    }

    return 0;
}