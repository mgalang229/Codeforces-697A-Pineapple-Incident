#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long t, s, x;
	cin >> t >> s >> x;
	long long ans = t;
	// check if 't' is already equal to 'x'
	if (ans == x) {
		cout << "YES" << '\n';
		return 0;
	}
	// otherwise, perform brute-force (as long as 'ans' is less than 'x')
	while (ans < x) {
		ans += s;
		if (ans == x || ans + 1 == x) {
			cout << "YES" << '\n';
			return 0;
		}
	}
	// check if 'ans' or 'ans + 1' is equal to 'x'
	cout << (ans == x || ans + 1 == x ? "YES" : "NO") << '\n';
	return 0;
}
