// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int l,r;
//     cin>>l>>r;

//     int ans=0;
//     while(l){
//         l/=3;
//         ans++;
//     }

//     int x=ans;
//     ans+=x;
//     for(int i=l+1; i<=r; i++){
//         if(i/ans!=0) x++;
//         ans+=x;
//     }

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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

const int MAXN = 200005;
int f[MAXN];
int pref[MAXN];

void solve() {
    int l, r;
    cin >> l >> r;

    int ol = l; 
    int ans = 0;
    
    while (l) {
        l /= 3;
        ans++;
    }

    ans *= 2; 

    ans += (pref[r] - pref[ol]);

    cout << ans <<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1; i<MAXN; i++){
        f[i]=f[i/3]+1;
        pref[i]+=pref[i-1]+f[i];
    }

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}