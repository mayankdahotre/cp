#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum=0;
    int ok= v[0]==1;
    for(int i=0; i<n; i++){
        if(v[i]==1){
            ok=true;
        }
        else{
            sum+=v[i];
            ok = false;
        }
    }
    if(ok) sum++;

    cout<<sum<<endl;
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