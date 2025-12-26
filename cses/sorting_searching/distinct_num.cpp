#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
using ll = long long;

ll getDistNumber(const vector<long long>& arr)
{
    map<long long, long long> exist;
    ll count = 0;
    for (long long i = 0; i < arr.size(); i++)
    {
        if (exist.find(arr[i]) == exist.end())
        {
            count += 1;
            exist[arr[i]] = 1;
        }
    }
    return count;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    // Solution sol;

    long long n;
    cin >> n;
    vector<long long> arr;
    long long x;
    while (n--)
    {
        cin >> x;
        arr.push_back(x);
    }
    ll answer = getDistNumber(arr);
    cout << answer << endl;
}
