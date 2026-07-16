// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     vector<vector<int>> adj(n+1);
//     for(int i=0; i<m; i++){
//         int k;
//         cin>>k;

//         vector<int> g(k);
//         for(int j=0; j<k; j++) cin>>g[j];

//         for(int j=0; j<k; j++){
//             for(int l=j+1; l<k; l++){
//                 if(!find(adj[g[j]].begin(), adj[g[j]].end(), g[l])) adj[g[j]].push_back(g[l]);
//                 if(!find(adj[g[l]].begin(), adj[g[l]].end(), g[j])) adj[g[l]].push_back(g[j]);
//             }
//         }
//     }


//     vector<int> res(n+1);
//     for(int i=1; i<=n; i++){
//         int cnt=0;
//         vector<int> vis(n+1,0);
        
//         stack<int> st;
//         st.push(i);
//         cnt++;
//         vis[i]=1;

//         while(!st.empty()){
//             int u=st.top();
//             st.pop();

//             for(int v: adj[u]){
//                 if(!vis[v]){
//                     st.push(v);
//                     vis[v]=1;
//                     cnt++;
//                 }
//             }
//         }

//         res[i]=cnt;
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



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adj(n+1);

    for(int i=0; i<m; i++){
        int k;
        cin>>k;

        vector<int> g(k);
        for(int j=0; j<k; j++) cin>>g[j];

        for(int j=0; j<k; j++){
            for(int l=j+1; l<k; l++){
                int u = g[j];
                int v = g[l];
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
    }

    for(int i=1; i<=n; i++){
        sort(adj[i].begin(), adj[i].end());
        adj[i].erase(unique(adj[i].begin(), adj[i].end()), adj[i].end());
    }

    vector<int> res(n+1,0);

    for(int i=1; i<=n; i++){
        vector<int> vis(n+1,0);

        stack<int> st;
        st.push(i);
        vis[i]=1;
        res[i]++;


        while(!st.empty()){
            int u=st.top(); 
            st.pop();

            for(int v: adj[u]){
                if(!vis[v]){
                    vis[v]=1;
                    st.push(v);
                    res[i]++;
                }
            }
        }
    }

    for(int i=1; i<=n; i++) cout<<res[i]<<" ";
    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}