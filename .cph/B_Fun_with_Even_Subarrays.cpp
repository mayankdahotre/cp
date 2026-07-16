// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     bool b = true;
//     for(int i=0; i<n; i++){
//         if(v[i]!=v[n-1]){
//             b=false;
//             break;
//         };
//     }
    
//     if(b || n<=1){
//         cout<<0<<endl;
//         return;
//     }
//     else{
//         int m=0;
//         for(int i=n-1; i>=0; i--){
//             if(v[i]==v[n-1]) m++;
//             else break;
//         }

//         int m2=0;
//         for(int i=0; i<n-m; i++){
//             if(v[i]==v[n-1]) m2++;
//             else break;
//         }
        
//         int ans=0;
//         while(n-m2-m<n){
//             ans++;
//             m*=2;
//         }

//         cout<<ans<<endl;
//         return;
//     }
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
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> b = a;
    reverse(b.begin()+1, b.end());

    int ans = 0, x = 1;
    while(x < n) {
        if(b[x + 1] == b[1]) {
            x++;
            continue;
        }
        ans++;
        x *= 2;
    }

    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}
