// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     int t=n;
//     int ans=0;
//     // while(t>=k){
//     //     int l=t/2;
//     //     int h=t-l;
//     //     ans++;

//     //     if(k <= l) t = l;   // //fix
//     //     else t = h;         // //fix
//     // }

//     // if(t<k) cout<<-1<<endl;
//     // else cout<<ans<<endl;

//     if(t==k){
//         cout<<0<<endl;
//         return;
//     }

//     while(true){
//         if(t < k){
//             cout << -1 << endl;
//             return;
//         }

//         int l = t/2;
//         int h = t - l;
//         ans++;

//         if(k == l || k == h){
//             cout << ans << endl;
//             return;
//         }

//         if(k < l) t = l;
//         else t = h;
//     }

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

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     vector<int> cur = {n};
//     int ans = 0;

//     while(true) {
//         // check if k present
//         for(int x : cur) {
//             if(x == k) {
//                 cout << ans << endl;
//                 return;
//             }
//         }

//         vector<int> nxt;

//         for(int x : cur) {
//             if(x < k) continue;

//             int l = x / 2;
//             int r = x - l;

//             nxt.push_back(l);
//             if(l != r) nxt.push_back(r);
//         }

//         if(nxt.empty()) {
//             cout << -1 << endl;
//             return;
//         }

//         // remove duplicates (size ≤ 2 anyway)
//         sort(nxt.begin(), nxt.end());
//         nxt.erase(unique(nxt.begin(), nxt.end()), nxt.end());

//         cur = nxt;
//         ans++;
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






// //BFS top-down
// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     if(n<k){ cout<<-1<<endl; return; }
//     if(n==k){ cout<<0<<endl; return; }

//     map<int,int> d;
//     queue<int> q;
//     d[n] = 0;

//     q.push(n);
//     while(!q.empty()){
//         int x = q.front(); q.pop();
//         int lo = x/2, hi = x-lo;
//         for(int nxt : {lo,hi}){
//             if(d.count(nxt)) continue;
//             d[nxt] = d[x] + 1;
//             if(nxt==k){ cout<<d[nxt]<<endl; return; }
//             if(nxt>k) q.push(nxt); 
//         }
//     }

//     cout<<-1<<endl;
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

// const int INF = 2e18;
// map<int,int> memo;

// int rec(int x, int k){
//     if(x==k) return 0;
//     if(x<k) return INF;
//     if(memo.count(x)) return memo[x];
//     return memo[x] = 1 + min(rec(x/2, k), rec(x - x/2, k));
// }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     memo.clear();
//     int ans = rec(n,k);

//     if(ans>=INF) cout<<-1<<endl;
//     else cout<<ans<<endl;

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

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     if(n<k){ cout<<-1<<endl; return; }
//     if(n==k){ cout<<0<<endl; return; }

//     queue<int> q;
//     map<int,int> d;
//     q.push(k);
//     d[k]=0;

//     while(!q.empty()){
//         int x = q.front(); q.pop();
//         for(int par: {2*x-1, 2*x, 2*x+1}){
//             if(d.count(par)) continue;
//             if(par==n){ cout<<d[x]+1<<endl; return; }
//             if(par<n){
//                 d[par]=d[x]+1;
//                 q.push(par);
//             }
//         }
//     }

//     cout<<-1<<endl;
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