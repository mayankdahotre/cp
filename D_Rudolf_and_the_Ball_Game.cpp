// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void dfs(int cur, int i, int m, int n, vector<int> r, vector<int> c, set<int> s){
//     if(i==m){
//         s.insert(cur);
//         return;
//     }

//     if(c[i]==0) dfs((cur+r[i])%n, i+1, m, n, r, c, s);
//     else if(c[i]==1) dfs((cur+n-r[i])%n, i+1, m, n, r, c, s);
//     else{
//         dfs((cur+r[i])%n, i+1, m, n, r, c, s);
//         dfs((cur+n-r[i])%n, i+1, m, n, r, c, s);
//     }

//     return;
// }

// void solve() {
//     int n,m,x;
//     cin>>n>>m>>x;

//     vector<int> r(m), c(m);
//     for(int i=0; i<m; i++){
//         cin>>r[i];
//         char y;
//         cin>>y;

//         if(y=='1') c[i]=1;
//         else if(y=='0') c[i]=0;
//         else c[i]=-1;
//     }

//     set<int> s;
//     dfs(x, 0, m, n, r, c, s);

//     vector<int> ans; 
//     for(auto i: s) ans.push_back(i);

//     for(auto i: ans) cout<<i<<" ";
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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m,x;
//     cin>>n>>m>>x;

//     set<int> cur;
//     cur.insert(x);

//     for(int i=0;i<m;i++){
//         int r;
//         char c;
//         cin>>r>>c;

//         set<int> nxt;

//         for(auto pos:cur){

//             int cw = ((pos-1+r)%n)+1;
//             int ccw = ((pos-1-r%n+n*n)%n)+1;

//             if(c=='0') nxt.insert(cw);
//             else if(c=='1') nxt.insert(ccw);
//             else{
//                 nxt.insert(cw);
//                 nxt.insert(ccw);
//             }
//         }

//         cur = nxt;
//     }

//     cout<<cur.size()<<endl;

//     for(auto x:cur) cout<<x<<" ";
//     cout<<endl;

//     return;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin>>T;

//     while(T--) solve();
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void dfs(int cur, int i, int m, int n, vector<int> &r, vector<int> &c, set<int> &s){
//     if(i==m){
//         s.insert(cur);
//         return;
//     }

//     int cw = ((cur - 1 + r[i]) % n) + 1;
//     int ccw = ((cur - 1 - (r[i] % n) + n) % n) + 1;

//     if(c[i]==0) dfs(cw, i+1, m, n, r, c, s);
//     else if(c[i]==1) dfs(ccw, i+1, m, n, r, c, s);
//     else{
//         dfs(cw, i+1, m, n, r, c, s);
//         dfs(ccw, i+1, m, n, r, c, s);
//     }

//     return;
// }

// void solve() {
//     int n,m,x;
//     cin>>n>>m>>x;

//     vector<int> r(m), c(m);

//     for(int i=0; i<m; i++){
//         cin>>r[i];
//         char y;
//         cin>>y;

//         if(y=='1') c[i]=1;
//         else if(y=='0') c[i]=0;
//         else c[i]=-1;
//     }

//     set<int> s;
//     dfs(x, 0, m, n, r, c, s);

//     cout << s.size() << endl;

//     for(auto i: s) cout << i << " ";
//     cout << endl;

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
    int n,m,x;
    cin>>n>>m>>x;

    vector<int> r(m);
    vector<char> c(m);

    for(int i=0;i<m;i++){
        cin>>r[i]>>c[i];
    }

    vector<vector<int>> vis(m+1, vector<int>(n+1,0));

    queue<pair<int,int>> q;
    q.push({0,x});
    vis[0][x]=1;

    while(!q.empty()){
        // auto [i,pos]=q.front();
        auto i = q.front().first;
        auto pos = q.front().second;
        q.pop();

        if(i==m) continue;

        int cw=((pos-1+r[i])%n)+1;
        int ccw=((pos-1-r[i]%n+n*n)%n)+1;

        if(c[i]=='0' || c[i]=='?'){
            if(!vis[i+1][cw]){
                vis[i+1][cw]=1;
                q.push({i+1,cw});
            }
        }

        if(c[i]=='1' || c[i]=='?'){
            if(!vis[i+1][ccw]){
                vis[i+1][ccw]=1;
                q.push({i+1,ccw});
            }
        }
    }

    vector<int> ans;

    for(int pos=1;pos<=n;pos++){
        if(vis[m][pos]) ans.push_back(pos);
    }

    cout<<ans.size()<<endl;

    for(auto x:ans) cout<<x<<" ";
    cout<<endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}