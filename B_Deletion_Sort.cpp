#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    bool b = false;
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            b=true;
            break;
        }
    }

    if(b){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<n<<endl;
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