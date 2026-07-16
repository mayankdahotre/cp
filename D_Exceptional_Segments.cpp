// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, x;
//     cin >> n >> x;

//     int r=x%4;

//     int ge1=0, ge3=0, le1=0, le3=0;

//     le1=(x/4)+(x%4>=1);
//     le3=(x/4)+(x%4>=3);

//     ge1=(n-(x/4)*4)/4+(x%4<1);
//     ge3=(n-(x/4)*4)/4+(x%4<3);

//     int ans = le1*ge1 + le3*ge3 - (x%4==1|| x%4==3);

//     cout<<ans<<endl;
//     return;

// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) solve();
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 998244353;

int get0(int x) {
    if (x < 0) return 0;
    int y = 1ll; 
    if(x >= 3) y+=(x-3)/4+1;
    return y;
}

int get1(int x) {
    if (x < 0) return 0;
    int y=0;
    if(x >= 1) y=(x-1)/4+1;
    return y;
}

void solve() {
    int n, x;
    cin >> n >> x;

    int l0 = get0(x - 1) % MOD;
    int r0 = (get0(n) - l0 + MOD) % MOD;
    int ans = (l0 * r0) % MOD;

    int l1 = get1(x - 1) % MOD;
    int r1 = (get1(n) - l1 + MOD) % MOD;
    
    ans = (ans + (l1 * r1) % MOD) % MOD;

    cout << ans << endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    if (cin >> tests) {
        while (tests--) {
            solve();
        }
    }
    return 0;
}