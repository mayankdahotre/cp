// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, a, b, k;
//     cin>>n>>a>>b>>k;

//     if(n==2 || n==3){
//         cout<<1<<endl;
//         return;
//     }
//     else {
//         cout<<k+abs(a-b)<<endl;
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
    int n, a, b, k;
    cin>>n>>a>>b>>k;

    int d = abs(a-b);
    d = min(d, n-d);

    if(n<=3){
        cout<<1<<endl;
        return;
    }

    cout<<k+d<<endl;
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