#include <bits/stdc++.h>
using namespace std;

signed main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		if(n%4==0) {
			cout << n/4 << '\n';
		} else {
			cout << n/4 + 1 << '\n';
		}
	}

	return 0;
}
