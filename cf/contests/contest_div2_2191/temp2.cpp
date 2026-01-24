#include <iostream>
#include <vector>
#include <thread>
#include <future>

using namespace std;
using ll = long long;

// Function to calculate sum in a specific range [start, end)
void partial_sum(ll start, ll end, promise<ll>&& sum_promise) {
    ll local_sum = 0;
    for (ll i = start; i < end; ++i) {
        local_sum += i;
    }
    sum_promise.set_value(local_sum);
}

ll myfun_parallel(ll n) {
    ll limit = 2 * n;
    ll mid = n; // Splitting the O(2n) work into two O(n) chunks

    // Promises and futures to get return values from threads
    promise<ll> p1, p2;
    future<ll> f1 = p1.get_future();
    future<ll> f2 = p2.get_future();

    // Start two threads
    thread t1(partial_sum, 0, mid, move(p1));
    thread t2(partial_sum, mid, limit, move(p2));

    // Wait for threads and join
    t1.join();
    t2.join();

    // Combine results
    return f1.get() + f2.get();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto program_start = chrono::high_resolution_clock::now();

    

    

        // ----- Test case start timestamp -----
        auto tc_start = chrono::high_resolution_clock::now();

        // Note: n=1000000000 is very large for a loop, 
        // even in parallel, it will take a few seconds.
        ll n = 1000000000; 
        
        ll result = myfun_parallel(n);
        cout << result << endl;

        auto tc_end = chrono::high_resolution_clock::now();
        chrono::duration<double, milli> tc_time = tc_end - tc_start;

        cerr << "[Timestamp] Test case time: "
             << tc_time.count() << " ms\n";
    

    // ===== Program end timestamp =====
    auto program_end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> total_time = program_end - program_start;

    cerr << "[Timestamp] Total execution time: "
         << total_time.count() << " ms\n";
    
    return 0;
}