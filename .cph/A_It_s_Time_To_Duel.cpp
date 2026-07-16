#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int sum = 0;
    for(int i=0; i<n; i++) sum += v[i];
    if(sum<n/2 || sum==n){
        cout << "YES" << endl;
        return;
    }
    else{
        for(int i=0; i<n; i++){
            if(v[i]==0 && v[i+1]==0){
                cout<<"YES"<<endl;
                return;
            }
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