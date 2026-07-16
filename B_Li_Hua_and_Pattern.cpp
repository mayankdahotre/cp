#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;

		vector<vector<int>> a(n, vector<int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}

		int diff = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] != a[n - 1 - i][n - 1 - j]) diff++;
			}
		}
		diff /= 2;

		if (diff > k) cout<<"NO"<<endl;
		else {
			k -= diff;
			if (n % 2 == 1) cout<<"YES"<<endl;
			else if (k % 2 == 1) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
	return 0;
}
