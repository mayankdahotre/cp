// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i]; 
//         v[i]%=m;
//     }

//     int elem = 0, ans=0;
//     for(int i=0; i<m/2; i++){
//         if(i==0 || (i==m/2 && m%2==0)) elem = count(v.begin(), v.end(), i);
//         else if(min(count(v.begin(), v.end(), i), count(v.begin(), v.end(), m-i))) {
//             ans++; 
//             elem = max(count(v.begin(), v.end(), i), count(v.begin(), v.end(), m-i))-min(count(v.begin(), v.end(), i), count(v.begin(), v.end(), m-i));
//         }
//     }
//     ans+=elem;

//     cout<<ans<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> freq(m, 0);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x % m]++;
    }

    int ans = 0;

    if (freq[0]) ans++;

    if (m % 2 == 0 && freq[m / 2]) ans++;

    for (int i = 1; i <= m / 2; i++) {
        if (i == m - i) continue; 
        int a = freq[i];
        int b = freq[m - i];
        if (a == 0 && b == 0) continue;
        int mini = min(a, b);
        int maxi = max(a, b);
        if (mini == 0) {
            ans += maxi;
        } else {
            ans++; 
            if (maxi - mini > 0) ans += (maxi - mini - 1);
        }
        freq[i] = freq[m - i] = 0; 
    }

    cout << ans << endl;
    return;
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
