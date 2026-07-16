#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int x=0;
    for(int i=0; i<n-2; i++){
        if(v[i]<=v[i+1] && v[i+1]>=v[i+2]){
            x++;
        }
        else if(v[i]>=v[i+1] && v[i+1]<=v[i+2]){
            x++;
        }
    }

    if(x>1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
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