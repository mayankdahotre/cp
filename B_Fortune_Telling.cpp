// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long
// // #define debug(x) cout << #x << " = " << x << endl;
// // #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// // #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// // void solve() {
// //     int n,x,y;
// //     cin>>n>>x>>y;

// //     vector<int> v(n);
// //     for(int i=0; i<n; i++) cin>>v[i];

// //     vector<int> presum(n,0);
// //     presum[0]=v[0];
// //     for(int i=1; i<n; i++) presum[i]+=presum[i-1]+v[i];

// //     vector<int> sufxor(n,0);
// //     sufxor[n-1]=v[n-1];
// //     for(int i=n-2; i>=0; i--) sufxor[i]=sufxor[i-1]^v[i];

// //     for(int i=0; i<n; i++){
// //         if((x+presum[i])^sufxor[i]==y){
// //             cout<<"Alice"<<endl;
// //             return;
// //         }
// //     }

// //     cout<<"Bob"<<endl;
// //     return;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;

// //     while (T--) {
// //         solve();
// //     }

// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,x,y;
//     cin>>n>>x>>y;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> presum(n,0);
//     presum[0]=v[0];
//     for(int i=1; i<n; i++) presum[i]+=presum[i-1]+v[i];

//     vector<int> sufxor(n,0);
//     sufxor[n-1]=v[n-1];
//     for(int i=n-2; i>=0; i--) sufxor[i]=sufxor[i+1]^v[i];

//     for(int i=0; i<n; i++){
//         if(((x+presum[i])^sufxor[i])==y){
//             cout<<"Bob"<<endl;
//             return;
//         }
//     }

//     cout<<"Alice"<<endl;
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
    int n,x,y;
    cin>>n>>x>>y;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum=(x%2)+(y%2);
    for(int i=0; i<n; i++) sum+=v[i]%2;

    if(sum%2) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
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