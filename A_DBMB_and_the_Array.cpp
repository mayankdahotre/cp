#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,s,x;
    cin>>n>>s>>x;

    vector<int> v(n);
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }

    if(sum<=s){
        if((s-sum)%x==0){
            cout<<"YES"<<endl;
            return;
        }
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