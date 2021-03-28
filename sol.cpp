#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = INT_MAX;
	for (int i = 1; i <= sqrt(n); i++) {
		for (int j = 1; j <= n; j++) {
			// check if two numbers produce a product of 'n'
			if (i * j == n) {
				// store the smallest perimeter that can be calculated
				// using these two values
				ans = min(ans, 2 * i + 2 * j);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
