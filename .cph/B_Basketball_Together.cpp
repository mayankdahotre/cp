// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, d;
//     cin >> n >> d;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     sort(v.begin(), v.end(), greater<int>());

//     int ans = 0;
//     int i = 0, j = n - 1;

//     while (i < j) {
//         if (v[i] > d) {
//             ans++;
//             i++;  
//         }
//         int need = ceil(d / v[i]);
//         if (j - i + 1 >= need) {
//             ans++;
//             i++;
//             j -= (need - 1);
//         } else break;
//     }

//     cout << ans-1 << endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

# define int long long

void solve() {
    int n;
    long long d;
    cin >> n >> d;

    vector<long long> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    // Sort in descending order
    sort(p.rbegin(), p.rend());

    int wins = 0, i = 0;
    while (i < n) {
        long long maxPower = p[i];
        // Minimum number of players needed for this team
        long long teamSize = (d + maxPower) / maxPower;

        if (i + teamSize <= n) {
            ++wins;
            i += teamSize;
        } else {
            break;
        }
    }

    cout << wins << '\n';
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}