// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//         v[i]--;
//     }

//     string s;
//     cin>>s;

//     vector<int> ans;

//     vector<int> vis(n,0);
//     for(int i=0; i<n; i++){
//         if(!vis[i]){
//             int x=i;
//             int y=0;
//             while(x!=i){
//                 if(s[x]=='0') y++;
//                 x=v[x];
//                 vis[x]=1;
//             }

//             x=i;
//             while(x!=i){
//                 ans[x]=y;
//                 x=v[x];
//             }
//         }
//     }

//     for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        v[i]--;
    }

    string s;
    cin>>s;

    vector<int> ans(n);

    vector<int> vis(n,0);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            int x=i;
            int y=0;
            
            do {
                if(s[x]=='0') y++;
                vis[x]=1;
                x=v[x];
            } while(x!=i);

            x=i;
            do {
                ans[x]=y;
                x=v[x];
            } while(x!=i);
        }
    }

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
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