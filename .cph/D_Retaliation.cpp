#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(n==1){
        cout<<"YES"<<endl;
        return;
    }

    int d=v[1]-v[0];
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]!=d){
            cout<<"NO"<<endl;
            return;
        }
    }

    int minn = min(v[0],v[n-1]);
    int maxn = max(v[0],v[n-1]);

    int a=minn%n;
    int b=minn/n;

    bool yes=false;
    while(a>=0){
        if(d==a-b){
            yes=true;
            break;
        }
        a--;
        b+=n;
    }
    while(b>=0){
        if(d==a-b){
            yes=true;
            break;
        }
        a++;
        b-=n;
    }

    if(maxn-minn<=minn*(n-1) && yes){
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
    return;
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