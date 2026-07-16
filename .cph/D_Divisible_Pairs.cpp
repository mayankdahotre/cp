// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,x,y;
//     cin>>n>>x>>y;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int num=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if((v[i]%x+v[j]%x)%x==0 && ((v[i]%y-v[j]%y)%y==0)) num++;
//         }
//     }

//     cout<<num<<endl;
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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<pair<int, int>, int> cnt;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int xx = a[i] % x;
        int yy = a[i] % y;
        int kx = (x - xx) % x;

        ans += cnt[{kx, yy}];
        cnt[{xx, yy}]++;
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        solve();
    }

    return 0;
}
