// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// struct node(int n, vector<node> c){
//     int n;
//     this->n = n;

//     vector<node> c;
//     this->c = c;
// }

// void solve() {
//     int n;
//     cin>> n;

//     vector<int> v(n);
//     v[0]=-1;
//     for(int i=1; i<n; i++) cin>>v[i];

//     for(int i=0; i<n; i++) v[i]--;

//     vector<node> tree;
//     for(int i=1; i<n; i++){
//         tree[v[i]].push_back(tree[i]);
//     }

//     int ans=n;

//     for(int i=0; i<n; i++){
//         queue<int> q;
//         q.push(i);

//         vector<int> vis(n,0);
//         vis[i]=1;

//         while(!q.empty()){
//             int sz = q.size();
//             if(sz>1) ans++;

//             for(int j=0; j<sz; j++){
//                 int u = q.front();
//                 q.pop();

//                 vis[u]=1;
//                 for(auto x: tree[u]){
//                     q.push(x);
//                 }
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

//     while (T--) {
//         solve();
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

struct node {
    int id;
    vector<int> c;
};

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    p[0] = -1;
    for (int i = 1; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }

    vector<node> tree(n);
    for (int i = 0; i < n; i++) {
        tree[i].id = i;
    }

    for (int i = 1; i < n; i++) {
        tree[p[i]].c.push_back(i);
    }

    set<vector<int>> s;

    for (int i = 0; i < n; i++) {
        queue<int> q;
        q.push(i);

        while (!q.empty()) {
            int sz = q.size();
            vector<int> cur;

            for (int j = 0; j < sz; j++) {
                int u = q.front();
                q.pop();
                cur.push_back(u);

                for (auto x : tree[u].c) {
                    q.push(x);
                }
            }
            sort(cur.begin(), cur.end());
            s.insert(cur);
        }
    }

    cout << s.size() << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}