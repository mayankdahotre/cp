#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        if(n%k==0){
            cout<<2<<endl;
            cout<<n-1<<" "<<1<<endl;
            return;
        }
        else{
            cout<<1<<endl;
            cout<<n<<endl;
            return;
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