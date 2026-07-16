#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> f;
    for(int i=0; i<n; i++) f[v[i]]++;

    for(int i=1; i<x; i++){
        if(f[i]%(i+1)!=0){
            cout<<"No"<<endl;
            return;
        }
        else{
            f[i+1]+=f[i]/(i+1);
            f[i]=0;
        }
    }

    if(f.count(x)){
        cout<<"Yes"<<endl;
        return;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}



