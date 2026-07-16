#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MAXBIT = 32;

int parent[MAXN + MAXBIT], sz[MAXN + MAXBIT];

int find(int x) {
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(sz[x] < sz[y]) swap(x, y);
    parent[y] = x;
    sz[x] += sz[y];
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);

    int offset = n;  // bits will be from n to n+30

    for(int i=0; i<n+MAXBIT; i++){
        parent[i] = i;
        sz[i] = 1;
    }

    for(int i=0; i<n; i++){
        cin >> a[i];
        for(int bit=0; bit<MAXBIT; bit++){
            if(a[i] & (1 << bit)){
                unite(i, offset + bit);
            }
        }
    }

    vector<int> compSize(n);
    map<int, int> mp;

    for(int i=0; i<n; i++){
        int root = find(i);
        mp[root]++;
    }

    for(int i=0; i<n; i++){
        int root = find(i);
        cout << mp[root] << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}
