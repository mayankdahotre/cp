#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    cout<<2*n-2<<endl;

    cout<<1<<" "<<2<<" "<<n<<endl;
    
    for(int i=2; i<n; i++){
        cout<<i<<" "<<1<<" "<<i<<endl;
        cout<<i<<" "<<i+1<<" "<<n<<endl;
    }

    cout<<n<<" "<<1<<" "<<n<<endl;

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