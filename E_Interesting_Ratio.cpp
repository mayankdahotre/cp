#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<bool> sieve(int n) {
    vector<bool> isprime(n + 1, true);
    isprime[0] = isprime[1] = false; 

    for (int i = 2; i * i <= n; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }

    return isprime;
}

void solve() {
    int n;
    cin >> n;

    vector<bool> isprime = sieve(n);
    vector<int> primes;

    for (int i = 2; i <= n; i++) {
        if (isprime[i]) {
            primes.push_back(i);
        }
    }

    int num = 0;
    for (int i = 1; i <= n; i++) {
        for (int j : primes) {
            if (i * j > n) break;
            num++;
        }
    }

    cout << num << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
