// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;
    
//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     vector<int> no(n,0);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(a[j]>b[i]) no[i]++;
//         }
//         if(no[i]==0){
//             cout<<0<<endl;
//             return;
//         }
//     }

//     int num=1;
//     for(int i=n-1; i>0; i--){
//         num*=no[i]-(n-1-i);
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
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());

    int ans = 1;
    for(int i = 0; i < n; i++) {
        int geq = a.end() - upper_bound(a.begin(), a.end(), b[i]);
        int w = geq - i;
        if(w <= 0) {
            cout << 0 << endl;
            return;
        }
        ans = (ans * w) % MOD;
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
