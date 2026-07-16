#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(3,0);

    bool ok=false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            v[0]=i;
            ok = true;
            break;
        }
    }

    if(!ok){
        cout<<"NO"<<endl;
        return;
    }

    n/=v[0];

    for(int i=v[0]+1; i*i<=n; i++){
        if(n%i==0){
            if(n/i!=i && n/i!=v[0]){
                v[1]=i;
                v[2]=n/i;
            } 
        }
    }

    if(v[1]==0){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
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