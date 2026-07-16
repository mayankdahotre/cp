#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    if(n>m || (n%2==0 && m%2==1)){
        cout<<"NO"<<endl;
        return;
    }
    else if(n%2==1){
        cout<<"YES"<<endl;
        for(int i=0; i<n-1; i++){
            cout<<1<<" ";
        }
        cout<<m-n+1<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0; i<n-2; i++){
            cout<<1<<" ";
        }
        cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
        return;
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