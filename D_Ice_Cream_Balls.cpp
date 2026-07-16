// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     int l=0, r=n;
//     while(l<=r){
//         int m=(l+r)/2;

//         int x=m*(m+1)/2;

//         if(x==n) break;
//         if(x<n) l=m+1;
//         else r=m=1;
//     }

//     int ans = n-l*(l+1)/2;
//     ans+=l;

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

    int n;
    cin >> n;

    int l=0, r=2e9, best=0;

    while(l<=r){

        int m=(l+r)/2;

        auto x=m*(m+1)/2;

        if(x<=n){
            best=m;
            l=m+1;
        }
        else r=m-1;
    }

    cout<<best+n-(best*(best+1)/2)+1<<endl;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--){

        solve();
    }

    return 0;
}