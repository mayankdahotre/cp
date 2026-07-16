// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int num(int x, int y){
//     int n = abs(y-x);

//     if(n==0) return 1;

//     int ans = 0;
//     for(int i=1; i*i<=n; i++){
//         if(n%i==0){
//             ans++;
//             if(i != n/i) ans++;
//         }
//     }

//     // if(abs(y-x)) ans+=2;

//     return ans;
// }

// void solve() {
//     int x, y;
//     cin>>x>>y;

//     cout<<num(x,y)<<endl;
//     for(int i=0; i<x; i++) cout<<1<<" ";
//     for(int i=0; i<y; i++) cout<<-1<<" ";
//     cout<<endl;

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
    int x, y;
    cin>>x>>y;

    int n = abs(x-y);

    int ans = 0;
    if(n==0) ans = 1;
    else{
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                ans++;
                if(i != n/i) ans++;
            }
        }
    }

    cout<<ans<<endl;

    for(int i=0; i<x; i++) cout<<1<<" ";
    for(int i=0; i<y; i++) cout<<-1<<" ";

    cout<<endl;
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