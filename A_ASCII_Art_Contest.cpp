#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int g,c,l;
    cin>>g>>c>>l;

    if(max(g,max(c,l))-min(g,min(c,l))>=10){
        cout<<"check again"<<endl;
    }
    else{
        int minn = min(g,min(c,l));
        int maxn = max(g,max(c,l));
        int ans = g+c+l-minn-maxn;
        cout<<"final "<<ans<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}