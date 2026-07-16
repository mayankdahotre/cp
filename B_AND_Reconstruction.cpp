#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> b(n-1);
    for(int i=0; i<n-1; i++) cin>>b[i];

    vector<int> a(n);
    int an = 0;
    for(int i=0; i<n-1; i++) an|=b[i];

    a[0]=b[0];
    a[1]=an;
    a[2]=b[1];

    bool ok=true;
    for(int i=3; i<n-1; i++){
        if(!ok){
            cout<<-1<<endl;
            return;
        }

        ok=false;
        for(int j=0; j<=an; j++){
            if(j&a[i-1]==b[i]){
                a[i]=j;
                ok=true;
                break;
            }
        }
    }

    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;

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