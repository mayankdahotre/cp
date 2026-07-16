// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     if(k==0){
//         cout<<n<<endl;
//         return;
//     }

//     int x=0;
//     while((1<<x) < n+k) x++;
//     x--;

//     // int ans=0;
//     // for(int i=max(0LL,n-k); i<=n+k; i++) ans|=i;
//     // cout<<ans<<endl;
//     // return;

//     int ans=x;
//     for(int i=x+1; i<=n+k; i++) ans|=i;
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

void solve() {
    int n,k;
    cin>>n>>k;

    if(k==0){
        cout<<n<<endl;
        return;
    }

    int l=max(0LL,n-k);
    int r=n+k;

    int x=60;
    while(x>=0 && ((l>>x)&1)==((r>>x)&1)) x--;

    if(x==-1){
        cout<<l<<endl;
        return;
    }

    int ans=r;
    ans|=((1LL<<(x+1))-1);

    cout<<ans<<endl;
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