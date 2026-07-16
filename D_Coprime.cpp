// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }

//     int maxsum=-1;
//     for(int j=n-1; j>=0; j--){
//         for(int i=j; i>=0; i--){
//             if(__gcd(v[i],v[j])==1){
//                 maxsum = max(maxsum,i+j+2);
//             }
//         }
//     }

//     cout<<maxsum<<endl;
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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// vector<set<int>> copr(1002);

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> occ(1002,-1);
//     for(int i=0; i<n; i++) occ[v[i]]=i;

//     int ans=-1;
    
//     for(int i=n-1; i>=0; i--){
//         for(auto u: copr[v[i]]){
//             if(occ[u]!=-1){
//                 ans=max(ans, i+occ[u]);
//             }
//         }
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

//     for(int i=1; i<=1000; i++){
//         for(int j=1; j<=1000; i++){
//             if(__gcd(i,j)==1){
//                 copr[i].insert(j);
//                 copr[j].insert(i);
//             }
//         }
//     }

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

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> occ(1002, -1);
    for(int i=0; i<n; i++) occ[v[i]] = i;

    int ans = -1;
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            if(occ[i] != -1 && occ[j] != -1 && __gcd(i,j)==1){
                ans = max(ans, occ[i] + occ[j] + 2);
            }
        }
    }

    cout << ans << endl;
    return;
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}