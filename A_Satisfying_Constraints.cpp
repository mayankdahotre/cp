#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    int l=-1, r=-1, ans=0;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        if(a==1){
            l=max(l,b);
        }
        else if(a==2){
            r=min(r,b);
        }
        else{
            if(b<=r && b>=l){
                ans--;
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}