#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n,m;
    cin>>n>>m;
    
    vector<int> pos(n + 1); 
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pos[v[i]] = i; 
    }

    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;

        swap(pos[v[a-1]], pos[v[b-1]]);

        int r = 1;
        for(int i=2; i<=n; i++){
            if(pos[i]<pos[i-1]) r++;
        }
        cout<<r<<endl;
        
    }
    
    return 0;
}
