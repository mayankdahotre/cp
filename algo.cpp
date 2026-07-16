// BFS

#include <bits/stdc++.h>
using namespace std;






void bfs(vector<vector<int>> adj){
    int n = adj.size();
    vector<int> vis(n,0);

    queue<int> q;
    q.push(0);
    vis[0]=1;

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for(auto nei: adj[v]){
            if(!vis[nei]){
                vis[nei]=1;
                q.push(nei);
            }
        }
    }
}



void bfs(){
    vector<vector<int>> adj;

    int n = adj.size();
    vector<int> vis(n,0);

    for(int u=0; u<n; u++){
        if(vis[u]) continue;

        queue<int> q;
        q.push(u);
        vis[u]=1;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto v: adj[node]){
                if(!vis[v]){
                    vis[v]=1;
                    q.push(v);
                }
            }
        }
    }
}






void dfs_recur(int u, vector<int> &vis, vector<vector<int>> adj){
    if(vis[u]) return;
    vis[u] = 1;

    for(auto nei: adj[u]){
        if(!vis[nei]){
            dfs_recur(nei, vis, adj);
        }
    }
}

void dfs(){
    int src = 0;
    vector<vector<int>> adj;

    int n = adj.size();
    vector<int> vis(n,0);

    for(int i=0; i<n; i++){
        dfs_recur(i, vis, adj);
    }
}





void dfs_iter(){
    vector<vector<int>> adj;

    int n = adj.size();
    vector<int> vis(n,0);

    for(int u=0; u<n; u++){
        if(vis[u]) continue;
        stack<int> st;

        st.push(u);

        while(!st.empty()){
            int node = st.top();
            st.pop();

            if(vis[node]) continue;

            vis[node]=1;

            for(auto nei: adj[node]){
                if(!vis[nei]){
                    st.push(nei);
                }
            }
        }
    }
}



// Cycle Detection

// DFS Undirected Stack Iter
// DFS Undirected Recur
// BFS Undirected
// DSU Undirected

// DFS directed Stack Iter
// DFS directed Recur
// Kahn BFS Undirected
// DSU Undirected

bool dfshelper(int u, int par, vector<int> vis, vector<vector<int>> adj){
    vis[u]=1;

    for(auto i: adj[u]){
        if(!vis[i]){
            if(dfshelper(i, par, vis, adj) return true;
        }
        else if(nei != par){
            return true;
        }
    }
}

bool cycledetec(){
    vector<vector<int>> adj;

    int n = adj.size();
    vector<int> vis(n,0);

    for(int i=0; i<n; i++){
        if(dfshelper(i, -1, vis, adj)) return true;
    }

    return false;
}





bool hasCycle(){
    vector<vector<int>> adj;

    int n = adj.size();
    vector<int> vis(n,0);

    for(int u=0; u<n; i++){
        if(vis[u]) continue;

        stack<pair<int,int>> st;
        st.push({u,-1});

        while(!st.empty()){
            int node = st.top().first;
            int par = st.top().second;
            st.pop();

            for(auto i: adj[node]){
                if(!vis[nei]){
                    st.push({nei,node});
                }
                else if(nei!=par){
                    return true;
                }
            }
        }
    }
    return false;
}



bool hasCycle(){
    vector<vector<int>> adj;

    int n = adj.size();
    vector<int> vis(n,0);

    queue<pair<int,int>> q;
    q.push({0,-1});

    while(!q.empty()){
        int node = q.front().first;
        int par = q.front().second;
        q.pop();

        for(auto nei: adj[node]){
            if(!vis[nei]){
                vis[nei] = 1;
                q.push({nei, node});
            }
            else if(nei != par){
                return true;
            }
        }
    }
    return false;
}







class DSU{
public:
    vector<int> par, rank;

    DSU(int n){
        par.resize(n);
        rank.resize(n,0);
        for(int i=0; i<n; i++) par[i]=i;
    }

    int find(int x){
        if(par[x] != x){
            par[x] = find(par[x]);
        }
        return par[x];
    }

    void unite(int x, int y){
        int px = find(x);
        int py = find(y);

        if(px==py) return;

        if(rank[x]<rank[y]) par[px] = py;
        else if(rank[x]>rank[y]) par[py] = px;
        else{
            par[py] = px;
            rank[x]++;
        }

        return;
    }
}

bool hasCycle(){
    vector<pair<int,int>> e;

    int n = e.size();

    DSU dsu(n);

    for(auto [u,v]: e){
        if(dsu.find(u)==dsu.find(v)) return true;
        dsu.unite(u,v);
    }
    
    return false;
}







bool dfshelper(int u, vector<int> vis, vector<int> pathvis, vector<vector<int>> adj){
    int n = adj.size();
    vis[u]=1;
    pathvis[u]=1;

    for(auto nei: adj[u]){
        if(!vis[u]){
            dfshelper(nei, vis, pathvis, adj);
        }
        else if(pathvis[u]){
            return true;
        }
    }

    pathvis[u]=0;
    return false;
}

bool hasCycle(){
    vector<vector<int>> adj;

    int n = adj.size();
    vector<int> vis(n,0);
    vector<int> pathvis(n,0);

    for(int i=0; i<n; i++){
        if(dfshelper(i, vis, pathvis, adj)) return true;
    }

    return false;
}












