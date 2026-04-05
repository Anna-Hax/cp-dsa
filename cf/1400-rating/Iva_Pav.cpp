#include <bits/stdc++.h>

using namespace std;

int a[200000];
int pre[30][200001]; // pre[bit][i] = count of zeros in 'bit' among a[0..i-1]

int range_and(int l, int r) {
	// Compute bitwise AND of a[l..r] using precomputed zero-counts per bit.
	int ans = 0;
	for (int i = 0; i < 30; i++) {
		// If there are 0 zeros for bit i in [l, r], then bit i remains 1 in the AND.
		if (pre[i][r + 1] - pre[i][l] == 0) {
			ans += (1 << i);
		}
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// Build prefix zero-counts for each bit position.
	for (int j = 0; j < 30; j++) {
		pre[j][0] = 0; // empty prefix has zero zeros
		for (int i = 0; i < n; i++) {
			// Increment if j-th bit of a[i] is zero; otherwise carry over.
			if ((1 << j) & a[i]) {
				pre[j][i + 1] = pre[j][i];
			} else {
				pre[j][i + 1] = pre[j][i] + 1;
			}
		}
	}

	int q;
	cin >> q;

	while (q--) {
		int l, k;
		cin >> l >> k;
		l--; 

		if (a[l] < k) {
			cout << -1 << ' ';
			continue;
		}

		int low = l, high = n - 1;
		while (low < high) {
			int mid = (low + high + 1) / 2; 
			if (range_and(l, mid) >= k) {
				low = mid; 
			} else {
				high = mid - 1; 
			}
		}
		cout << low + 1 << ' '; 
	}
	cout << '\n';
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	cin.sync_with_stdio(false); // fast IO

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}

