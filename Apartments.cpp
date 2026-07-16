#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m,k;
    cin>>n>>m>>k;

    multiset<int> a;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        a.insert(m);
    }

    multiset<int> b;
    for(int i=0; i<m; i++){
        int m;
        cin>>m;
        b.insert(m);
    }

    int cnt = 0;
    for(auto it=a.begin(); it!=a.end(); ){
        auto found = b.lower_bound(*it-k);
        if(found != b.end() && *found <= *it+k){
            cnt++;
            b.erase(found);
            it=a.erase(it);
        }
        else{
            it++;
        }
    }

    cout<<cnt<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}